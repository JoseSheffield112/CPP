#include <iostream>

// g++ hello.cpp will create object file

// g++ -o hello ./hello.cpp will create executable

int main() {
    // signed short min values on my linux enviroment is 0 - 65535 - which is the same with the unsigned range !
    //unsigned a (-65536);
    auto a(-32); // can use auto to deduce variable type
    printf("%i\n",a);

    decltype(a) b(32); // decltype used to deduce type, then use for variable declaration

    std::cout << &b << std::endl;

    int aa = 1, bb = 2;
    int * aa_loc = &aa, * bb_loc = &bb, cc = 88; // NOTE : pointer declarations require * to precede variable name

    // you can then also edit a memory location :
    *aa_loc = 2; // This will update pointer of aa_loc, aa, to 2;

    // TO ENABLE POINTER-CEPTION:
    int ** aa_loc_loc = &aa_loc;

    std::cout << aa_loc << " -=-=- " << bb_loc << " @@@ " << cc << std::endl;

    // to access the content at a memory location
    int aa_val = *aa_loc;

    std::cout << aa_val << std::endl;

    std::cout << "Hello World!" << std::endl;

    return 0; // In C++, compiler will automatically append this successful status code !
}

