#pragma once
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace System::Windows::Forms;

public ref class RoundedTextBox : public TextBox {
protected:
    virtual void OnPaint(PaintEventArgs^ e) override {
        // Call the base class method to draw the default TextBox
        TextBox::OnPaint(e);

        // Create a GraphicsPath to define the rounded corners
        GraphicsPath^ path = gcnew GraphicsPath();
        int cornerRadius = 10; // Set the radius for rounded corners
        Rectangle rect = this->ClientRectangle;

        path->AddArc(rect.X, rect.Y, cornerRadius, cornerRadius, 180, 90);  // Top-left
        path->AddArc(rect.Right - cornerRadius, rect.Y, cornerRadius, cornerRadius, 270, 90);  // Top-right
        path->AddArc(rect.Right - cornerRadius, rect.Bottom - cornerRadius, cornerRadius, cornerRadius, 0, 90);  // Bottom-right
        path->AddArc(rect.X, rect.Bottom - cornerRadius, cornerRadius, cornerRadius, 90, 90);  // Bottom-left
        path->CloseFigure();

        // Clip the control to the rounded rectangle
        e->Graphics->SetClip(path);

        // Optionally, draw a custom border
        Pen^ borderPen = gcnew Pen(Color::Blue, 1);
        e->Graphics->DrawPath(borderPen, path);
    }
};
