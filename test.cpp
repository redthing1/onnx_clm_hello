#include "target/cxxbridge/tinytokenizers/src/lib.rs.h"

#include <iostream>
#include <string>

int main()
{
    rust::Box<Tokenizer> tokenizer = from_file("tokenizer.json");
    rust::Box<Encoding> encoding = tokenizer->encode("Hello, world. Hello, world. Hello, world.", true);
    for ( auto & token : encoding->get_ids()) {
        std::cout << token << " ";
    }
    std::cout << std::endl;
}
