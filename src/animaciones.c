// Daniella Zambrano
#include "animaciones.h"

void imagen1()
{
    printf("%s                                          \n", CYAN);
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                      (....HOLA...) \n");
    printf("                      '-----,,---'  \n");
    printf("                               )/   \n");
    printf("%s       @@@@@@                      \n", WHITE);
    printf("       @      @                     \n");
    printf("       @      @                     \n");
    printf("       @      @       o00o          \n");
    printf("        @@@@@@       o@@@@          \n");
    printf("          @           @@            \n");
    printf("         @@@          @             \n");
    printf("        @ @  @       @              \n");
    printf("       @  @    @    @               \n");
    printf("      @   @      @@                 \n");
    printf("     @    @                         \n");
    printf("      @   @                         \n");
    printf("       @  @                         \n");
    printf("        @ @                       %s\n", NONE);
}

void imagen2()
{
    printf("%s                                          \n", CYAN);
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("        (..BIENVENIDO..)               \n");
    printf("        '------,,------'               \n");
    printf("                      )/               \n");
    printf("%s                            @@@@@@    \n", WHITE);
    printf("                            @      @   \n");
    printf("                            @      @   \n");
    printf("                 o00o       @      @   \n");
    printf("                 o@@@        @@@@@@    \n");
    printf("                  @@            @      \n");
    printf("                   @           @@@     \n");
    printf("                     @       @  @ @    \n");
    printf("                      @    @    @  @   \n");
    printf("                        @@      @   @  \n");
    printf("                                @    @ \n");
    printf("                                @   @  \n");
    printf("                                @  @   \n");
    printf("                                @ @  %s\n", NONE);
}

void imagen3()
{
    printf("%s                                          \n", CYAN);
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                     (......A.....) \n");
    printf("                      '-----,,---'  \n");
    printf("                               )/   \n");
    printf("%s       @@@@@@                      \n", WHITE);
    printf("       @      @                     \n");
    printf("       @      @                     \n");
    printf("       @      @       o00o          \n");
    printf("        @@@@@@       o@@@@          \n");
    printf("          @           @@            \n");
    printf("         @@@          @             \n");
    printf("        @ @  @       @              \n");
    printf("       @  @    @    @               \n");
    printf("      @   @      @@                 \n");
    printf("     @    @                         \n");
    printf("      @   @                         \n");
    printf("       @  @                         \n");
    printf("        @ @                       %s\n", NONE);
}

void imagen4()
{

    printf("%s                                        \n", YELLOW);
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("          QUIEN                           \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("%s                         QUIERE         \n", BLUE);
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("             SER                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("%s                           MILLONARIO   \n", RED);
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          %s\n", NONE);
}

int menu()
{

    int select;
    int pulse;
    int mode;

    do
    {

        do
        {

            printf("\n\t\t1---Start Game----");
            printf("\n\t\t2---Select languaje----");
            printf("\n\t\t3---Exit----");
            printf("\n\n");
            scanf("%d", &pulse);

            if (pulse == 1)
                return 1;
            if (pulse == 3)
                return 0;

        } while (pulse != 2);

        if (pulse == 2)
        {

            printf("\n1   English    ");
            printf("\n2   Spanish    ");
            printf("\n\n");
            scanf("%d", &select);

            if (select == 1)
            {
                printf("     Sorry this languaje is not vailable in your contry\n");
                mode = 1;
            }
            else
            {
                printf("     The game will be in Spanish\n");
                mode = 1;
            }
        }

    } while (mode == 1);
}

void win()
{

    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("%s              (......CORRECTA!!!!.....) \n", CYAN);
    printf("                    '-----,,---'  \n");
    printf("                            )/   \n");
    printf("%s       @@@@@@                      \n", YELLOW);
    printf("       @      @                     \n");
    printf("       @      @                     \n");
    printf("       @      @       o00o          \n");
    printf("        @@@@@@       o@@@@          \n");
    printf("          @           @@            %s\n", NONE);
}

void lost()
{

    printf("                                        \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                     \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("%s                        PERDISTE!!!         \n", RED);
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                      \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                           \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          \n");
    system("sleep 0.15 ");
    printf("                                          %s\n", NONE);
}
void winwin()
{

    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("%s   (YOU WIN WHO WANTS TO BE MILLONAIRE!!!!.....) \n", CYAN);
    printf("                    '-----,,---'  \n");
    printf("                            )/   \n");
    printf("%s       @@@@@@                      \n", YELLOW);
    printf("       @      @                     \n");
    printf("       @      @                     \n");
    printf("       @      @       o00o          \n");
    printf("        @@@@@@       o@@@@          \n");
    printf("          @           @@            %s\n", NONE);
}

void winWIN()
{

    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("                                          \n");
    printf("%s   (YOU WIN WHO WANTS TO BE MILLONAIRE!!!!.....) \n", WHITE);
    printf("                    '-----,,---'  \n");
    printf("                            )/   \n");
    printf("%s       @@@@@@                      \n", YELLOW);
    printf("       @      @                     \n");
    printf("       @      @                     \n");
    printf("       @      @       o00o          \n");
    printf("        @@@@@@       o@@@@          \n");
    printf("          @           @@            %s\n", NONE);
}
