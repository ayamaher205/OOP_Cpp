#include<iostream>
using namespace std;
class complex {
private:
    int real;
    int image;

public:
    void setReal(int _real) {
        real = _real;
    }
    void setImage(int _Image) {
        image = _Image;
    }
    int getReal(void) {
        return real;
    }
    int getImage(void) {
        return image;
    }
    // create some Member functions of class 
    complex addMember(complex c2) {
        complex c3;
        c3.real = real + c2.real;
        c3.image = image + c2.image;
        return c3;
    }
    void printMember(void) {
        cout << real << " " << image;
        if (image < 0) {
            cout << image << "j = " << "\n";
        }
        else if (image > 0) {
            cout << "+ " << image << "j = " << "\n";
        }
    }
    complex subMember(complex c2) {
        complex c3;
        c3.real = real - c2.real;
        c3.image = image - c2.image;
        return c3;
    }
    // create friend function of class 
    friend void printfriend(complex c);
};

// create some stand alone functions of class 
complex add(complex c1, complex c2) {
    complex c3;
    c3.setReal(c1.getReal() + c2.getReal());
    c3.setImage(c1.getImage() + c2.getImage());
    return c3;
}
void print(complex c) {
    cout << c.getReal() << " ";
    if (c.getImage() < 0) {
        cout << c.getImage() << "j = " << "\n";
    }
    else if (c.getImage() > 0) {
        cout << "+ " << c.getImage() << "j = " << "\n";
    }
    else {
        cout << c.getReal() << "\n";
    }
}
complex sub(complex c1, complex c2) {
    complex c3;
    c3.setReal(c1.getReal() - c2.getReal());
    c3.setImage(c1.getImage() - c2.getImage());
    return c3;
}
void printfriend(complex c) {
    cout << c.real << " ";
    int res = c.real + c.image;
    if (c.image < 0) {
        cout << c.image << "j = " << res << "\n";
    }
    else if (c.image > 0) {
        cout << "+ " << c.image << "j = " << res << "\n";
    }
    else {
        cout << c.real << "\n";
    }
}
int main()
{
    complex c, c1, c2, c3;
    int real1, image1, real2, image2;
    cout << "Enter real number one" << endl;
    cin >> real1;
    cout << "Enter image number one" << endl;
    cin >> image1;
        cout<<"Enter real number two"<<endl;
        cin>>real2;
        cout<<"Enter image number two"<<endl;
        cin>>image2;
    c1.setReal(real1);
    c1.setImage(image1);
    c2.setReal(real2);
    c2.setImage(image2);
    c3 = add(c2,c1);
    c1.printMember();
    c3 = sub(c1,c2);
    print(c3);
    return 0;
}