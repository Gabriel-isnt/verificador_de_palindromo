# include <iostream>
# include <algorithm>
# include <string>

int main(){
    std::string mensagem;
    std::string mensagemCompleta;
    std::string mensagemInvertida;
    
    std::cout << "informe um texto para eu verificar se é um palindromo (escreva fim na outra linha para terminar)" << std::endl;
    
    // tive que fazer isso para tirar os espaços da mensagem
    
    while(std::getline(std::cin, mensagem) && mensagem != "fim"){  //escreve a mensagem até sua mensagem ser um "fim"
        for(char c: mensagem){  // verifico cada uma das letras
            if(std::isalpha(c)){  // se essa letra for de fato uma letra
                mensagemCompleta += std::tolower(c);  // adiciono ela na mensagemCompleta (que vai sem espaços)
            }
        }
    }
    
    mensagemInvertida = mensagemCompleta;
    std::reverse(mensagemInvertida.begin(), mensagemInvertida.end());
    
    if(mensagemInvertida == mensagemCompleta){
        std::cout << "sua mensagem é um palindromo";
    
    } else {
        std::cout << "sua mensagem não é um palindromo";
        
    }
    
    
    
    return 0;
}
