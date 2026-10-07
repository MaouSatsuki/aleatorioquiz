#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

    {
    int a, x, y, i, dif, s, acerto, inv, erro;
    srand(time(0));

    
    do{
    std::cout << "Digite: \n\n (1) Jogo de adivinhacao \n (2) Quiz \n (3) Regras \n (4) Sobre \n (5) Sair do Jogo \n\n";
    std::cin >> a;

    i = 1;
    s = 1;
    acerto = 0;
    inv = 0;
    erro = 0;



    switch (a)
    {
        case 1:

            y = (rand() % 401) - 200;
            std::cout << "Esse e o jogo de adivinhacao, voce vai precisar escolher um numero de -200 a 200\n\n";

            while(i <= 15 && x != y)
            {
                std::cout << "Tentativa " << i;
                std::cout << "\nDigite o Numero: \n";
                std::cin >> x;
                dif = x - y;
                if( x > 200 || x < -200)
                {
                    std::cout << "Numero invalido";
                    i = i - 0;
                }
                else
                {
                if ( i == 5 )
                {
                    if ( y % 2 == 0)
                    {
                        std::cout << "\nO numero aleatorio e Par\n\n";
                    }
                    else
                    {
                        std::cout << "\nO numero aleatorio e impar\n\n";
                    }
                }
                if ( i <= 7 )
                {
                    if(10 >= x - y && -10 <= x - y)
                    {
                    std::cout << "\n\nVoce esta perto";
                    }
                }
                if ( i >= 13 )
                {

                    if ( dif > 0 )
                    {
                        std::cout << "\nSua ultima tentativa estava a " << dif << " de distancia";
                    }
                    else
                    {
                        dif = dif * -1;
                        std::cout << "\nSua ultima tentativa estava a " << dif << " de distancia";
                    }

                }
                //2 regras novas
                if ( x > y )
                {
                    std::cout << "\nSeu numero e maior que o aleatorio\n\n";
                    i = i + 1;

                }
                else if ( x < y )
                {
                    std::cout << "\nSeu numero e menor que o aleatorio\n\n";
                    i = i + 1;

                }

                if (x == y)
               {
                std::cout << "\n\nVoce acertou\n\n";
                system("pause");
                
               }
               else if (i > 15)
               {
                std::cout << "\n\nVoce errou";
                std::cout << "\n O numero certo era " << y << "\n\n";
                system("pause");
               }
               }
            }
        break;

        case 2:

             std::cout << "Bem vindo ao Quiz, Voce recebera 5 questoes a seguir:\n\n ";
             system("pause");
             std::cout << "Questao 1: O guitarrista do Queen, Brian May, tem um phd em que area?: ";
             std::cout << "\n\n(1) Astrofisica \n(2) Musica \n(3) Engenharia do Som \n(4) Administracao \n(5) Engenharia Mecanica\n\n";
             std::cin >> x;
             if (x == 1)
             {
                std::cout << "\n\n Voce acertou";
                acerto = acerto + 1;
             }
             else if (x > 1 && x <=5)
             {
                std::cout << "\n\n Voce errou";
                erro = erro + 1;
             }
             else
             {
                std::cout << "\n\n Resposta invalida";
                inv = inv + 1;
             }

             std::cout << "\n\nQuestao 2: Qual a equipe mais velha da F1? ";
             std::cout << "\n\n(1) McLaren \n(2) Mercedes \n(3) Ferrari \n(4) Williams \n(5) Lotus\n\n";
             std::cin >> x;
             if(x == 3)
             {
                std::cout << "Voce acertou";
                acerto = acerto + 1;
             }
             else if(x >= 1 && x < 3)
             {
                std::cout << "\n\n Voce errou";
                erro = erro + 1;
             }
             else if (x > 3 && x <=5)
             {
                std::cout << "\n\n Voce errou";
                erro = erro + 1;
             }
             else
             {
                std::cout << "\n\n Resposta invalida";
                inv = inv + 1;
             }

             std::cout << "\n\nQuestao 3: Quem foi a primeira pessoa a viajar pro Espaco? ";
             std::cout << "\n\n(1) Yuri Gargarin \n(2) Laika \n(3) Neil Armstrong \n(4) Marcos Pontes \n(5) Buzz Aldrin\n\n";
             std::cin >> x;
             if (x == 1)
             {
                std::cout << "\n\n Voce acertou";
                acerto = acerto + 1;
             }
             else if (x > 1 && x <=5)
             {
                std::cout << "\n\n Voce errou";
                erro = erro + 1;
             }
             else
             {
                std::cout << "\n\n Resposta invalida";
                inv = inv + 1;
             }

             std::cout << "\n\nQuestao 4: Em que país se anda mais de bicicleta?";
             std::cout << "\n\n(1) Brasil \n(2) EUA \n(3) Mexico \n(4) Italia \n(5) Paises Baixos\n\n";
             std::cin >> x;
             if (x == 5)
             {
                std::cout << "\n\nVoce acertou";
                acerto = acerto + 1;
             }
             else if (x >= 1 && x < 5)
             {
                std::cout << "\n\nVoce errou";
                erro = erro + 1;
             }
             else
             {
                std::cout << "\n\nResposta Invalida";
                inv = inv + 1;
             }

             std::cout << "\n\nQuestao 5: Que líder mundial ficou conhecida como Dama de Ferro?";
             std::cout << "\n\n(1) Dilma Rouseff \n(2) Angela Merkel \n(3) Hillary Clinton \n(4) Margaret Thatcher \n(5) Christine Lagarde\n\n";
             std::cin >> x;
             if (x == 4)
             {
                std::cout << "\n\nVoce acertou";
                acerto = acerto + 1;
             }
             else if (x == 5)
             {
                std::cout << "\n\nVoce errou";
                erro = erro + 1;
             }
             else if (x >= 1 && x < 4)
             {
                std::cout << "\n\nVoce errou";
                erro = erro + 1;
             }
             else
             {
                std::cout << "\n\nResposta invalida";
                inv = inv + 1;
             }

             if (acerto >= 4)
             {
                std::cout << "\n\nVOCE PASSOU NO QUIZ";
             }
             else
             {
                std::cout << "\n\nVOCE NAO CONSEGUIU PASSAR NO QUIZ";
             }
             

             std::cout << "\n\nVoce acertou: " << acerto;
             std::cout << "\nVoce errou: " << erro;
             std::cout << "\nRepostas Invalidas: " << inv;
             std::cout << "\n\n";

             system("pause");
             break;

        case 3:

         std::cout << "\n1. Adivinhacao: \n Digite um numero de -200 a 200, voce tera 15 chances para acertar, o jogo lhe dara dicas conforme as tentativas seguirem.";
         std::cout  << "\n\n2. Quiz: \n Voce tera que acertar 5 perguntas, com 5 alternativas cada. Se voce acertar 4 ou mais voce ganhara o Quiz.\n\n\n";
         system("pause");
        break;

        case 4:

         std::cout << "\nDesenvolvedores: Renato Reis Schwendler, Thiago Andre de Souza, Julio Marvel Malinverni Walenga \nOutubro/2026 \n\nProfessora Cristina Ono Horita\nAlgoritimos e Programacao 2026/2\n\n\n";
         system("pause");

        break;

        }

        system("cls");
    
    } while (a != 5);
}   
}
