#include <stdio.h>
#include <stdlib.h>

#include <dos.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

void loadingBar()
{
    // 0 - black background,
    // A - Green Foreground
    system("color 0A");

    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;

    printf("\n\n\n");
    printf("\t\t\t\t\tLoading...\n\n");
    printf("\t\t\t\t\t");

    // Print initial loading bar
    for (int i = 0; i < 26; i++)
        printf("%c", a);

    // Set the cursor again starting
    // point of loading bar
    printf("\r");
    printf("\t\t\t\t\t");

    // Print loading bar progress
    for (int i = 0; i < 26; i++) {
        printf("%c", b);

        // Sleep for 1 second
        Sleep(50);
    }
    system("cls");
}
void showAppName(){
    printf("\n\n\n");
    printf("\t\t\t     QQQQQQQQQ     UUUUUUUU     UUUUUUUUIIIIIIIIIIZZZZZZZZZZZZZZZZZZZ     TTTTTTTTTTTTTTTTTTTTTTTEEEEEEEEEEEEEEEEEEEEEE   SSSSSSSSSSSSSSS TTTTTTTTTTTTTTTTTTTTTTT\n");
    printf("\t\t\t   QQ:::::::::QQ   U::::::U     U::::::UI::::::::IZ:::::::::::::::::Z     T:::::::::::::::::::::TE::::::::::::::::::::E SS:::::::::::::::ST:::::::::::::::::::::T\n");
    printf("\t\t\t QQ:::::::::::::QQ U::::::U     U::::::UI::::::::IZ:::::::::::::::::Z     T:::::::::::::::::::::TE::::::::::::::::::::ES:::::SSSSSS::::::ST:::::::::::::::::::::T\n");
    printf("\t\t\tQ:::::::QQQ:::::::QUU:::::U     U:::::UUII::::::IIZ:::ZZZZZZZZ:::::Z      T:::::TT:::::::TT:::::TEE::::::EEEEEEEEE::::ES:::::S     SSSSSSST:::::TT:::::::TT:::::T\n");
    printf("\t\t\tQ::::::O   Q::::::Q U:::::U     U:::::U   I::::I  ZZZZZ     Z:::::Z       TTTTTT  T:::::T  TTTTTT  E:::::E       EEEEEES:::::S            TTTTTT  T:::::T  TTTTTT\n");
    printf("\t\t\tQ:::::O     Q:::::Q U:::::D     D:::::U   I::::I          Z:::::Z                 T:::::T          E:::::E             S:::::S                    T:::::T        \n");
    printf("\t\t\tQ:::::O     Q:::::Q U:::::D     D:::::U   I::::I         Z:::::Z                  T:::::T          E::::::EEEEEEEEEE    S::::SSSS                 T:::::T        \n");
    printf("\t\t\tQ:::::O     Q:::::Q U:::::D     D:::::U   I::::I        Z:::::Z                   T:::::T          E:::::::::::::::E     SS::::::SSSSS            T:::::T        \n");
    printf("\t\t\tQ:::::O     Q:::::Q U:::::D     D:::::U   I::::I       Z:::::Z                    T:::::T          E:::::::::::::::E       SSS::::::::SS          T:::::T        \n");
    printf("\t\t\tQ:::::O     Q:::::Q U:::::D     D:::::U   I::::I      Z:::::Z                     T:::::T          E::::::EEEEEEEEEE          SSSSSS::::S         T:::::T        \n");
    printf("\t\t\tQ:::::O  QQQQ:::::Q U:::::D     D:::::U   I::::I     Z:::::Z                      T:::::T          E:::::E                         S:::::S        T:::::T        \n");
    printf("\t\t\tQ::::::O Q::::::::Q U::::::U   U::::::U   I::::I  ZZZ:::::Z     ZZZZZ             T:::::T          E:::::E       EEEEEE            S:::::S        T:::::T        \n");
    printf("\t\t\tQ:::::::QQ::::::::Q U:::::::UUU:::::::U II::::::IIZ::::::ZZZZZZZZ:::Z           TT:::::::TT      EE::::::EEEEEEEE:::::ESSSSSSS     S:::::S      TT:::::::TT      \n");
    printf("\t\t\t QQ::::::::::::::Q   UU:::::::::::::UU  I::::::::IZ:::::::::::::::::Z           T:::::::::T      E::::::::::::::::::::ES::::::SSSSSS:::::S      T:::::::::T      \n");
    printf("\t\t\t   QQ:::::::::::Q      UU:::::::::UU    I::::::::IZ:::::::::::::::::Z           T:::::::::T      E::::::::::::::::::::ES:::::::::::::::SS       T:::::::::T      \n");
    printf("\t\t\t     QQQQQQQQ::::QQ      UUUUUUUUU      IIIIIIIIIIZZZZZZZZZZZZZZZZZZZ           TTTTTTTTTTT      EEEEEEEEEEEEEEEEEEEEEE SSSSSSSSSSSSSSS         TTTTTTTTTTT      \n");
    printf("\t\t\t             Q:::::Q\n");
    printf("\t\t\t              QQQQQQ\n");

}
void showGameOver(){
    printf("        GGGGGGGGGGGGG               AAA               MMMMMMMM               MMMMMMMMEEEEEEEEEEEEEEEEEEEEEE          OOOOOOOOO     VVVVVVVV           VVVVVVVVEEEEEEEEEEEEEEEEEEEEEERRRRRRRRRRRRRRRRR   \n");
    printf("     GGG::::::::::::G              A:::A              M:::::::M             M:::::::ME::::::::::::::::::::E        OO:::::::::OO   V::::::V           V::::::VE::::::::::::::::::::ER::::::::::::::::R  \n");
    printf("   GG:::::::::::::::G             A:::::A             M::::::::M           M::::::::ME::::::::::::::::::::E      OO:::::::::::::OO V::::::V           V::::::VE::::::::::::::::::::ER::::::RRRRRR:::::R \n");
    printf("  G:::::GGGGGGGG::::G            A:::::::A            M:::::::::M         M:::::::::MEE::::::EEEEEEEEE::::E     O:::::::OOO:::::::OV::::::V           V::::::VEE::::::EEEEEEEEE::::ERR:::::R     R:::::R\n");
    printf(" G:::::G       GGGGGG           A:::::::::A           M::::::::::M       M::::::::::M  E:::::E       EEEEEE     O::::::O   O::::::O V:::::V           V:::::V   E:::::E       EEEEEE  R::::R     R:::::R\n");
    printf("G:::::G                        A:::::A:::::A          M:::::::::::M     M:::::::::::M  E:::::E                  O:::::O     O:::::O  V:::::V         V:::::V    E:::::E               R::::R     R:::::R\n");
    printf("G:::::G                       A:::::A A:::::A         M:::::::M::::M   M::::M:::::::M  E::::::EEEEEEEEEE        O:::::O     O:::::O   V:::::V       V:::::V     E::::::EEEEEEEEEE     R::::RRRRRR:::::R \n");
    printf("G:::::G    GGGGGGGGGG        A:::::A   A:::::A        M::::::M M::::M M::::M M::::::M  E:::::::::::::::E        O:::::O     O:::::O    V:::::V     V:::::V      E:::::::::::::::E     R:::::::::::::RR  \n");
    printf("G:::::G    G::::::::G       A:::::A     A:::::A       M::::::M  M::::M::::M  M::::::M  E:::::::::::::::E        O:::::O     O:::::O     V:::::V   V:::::V       E:::::::::::::::E     R::::RRRRRR:::::R \n");
    printf("G:::::G    GGGGG::::G      A:::::AAAAAAAAA:::::A      M::::::M   M:::::::M   M::::::M  E::::::EEEEEEEEEE        O:::::O     O:::::O      V:::::V V:::::V        E::::::EEEEEEEEEE     R::::R     R:::::R\n");
    printf("G:::::G        G::::G     A:::::::::::::::::::::A     M::::::M    M:::::M    M::::::M  E:::::E                  O:::::O     O:::::O       V:::::V:::::V         E:::::E               R::::R     R:::::R\n");
    printf(" G:::::G       G::::G    A:::::AAAAAAAAAAAAA:::::A    M::::::M     MMMMM     M::::::M  E:::::E       EEEEEE     O::::::O   O::::::O        V:::::::::V          E:::::E       EEEEEE  R::::R     R:::::R\n");
    printf("  G:::::GGGGGGGG::::G   A:::::A             A:::::A   M::::::M               M::::::MEE::::::EEEEEEEE:::::E     O:::::::OOO:::::::O         V:::::::V         EE::::::EEEEEEEE:::::ERR:::::R     R:::::R\n");
    printf("   GG:::::::::::::::G  A:::::A               A:::::A  M::::::M               M::::::ME::::::::::::::::::::E      OO:::::::::::::OO           V:::::V          E::::::::::::::::::::ER::::::R     R:::::R\n");
    printf("     GGG::::::GGG:::G A:::::A                 A:::::A M::::::M               M::::::ME::::::::::::::::::::E        OO:::::::::OO              V:::V           E::::::::::::::::::::ER::::::R     R:::::R\n");
    printf("        GGGGGG   GGGGAAAAAAA                   AAAAAAAMMMMMMMM               MMMMMMMMEEEEEEEEEEEEEEEEEEEEEE          OOOOOOOOO                 VVV            EEEEEEEEEEEEEEEEEEEEEERRRRRRRR     RRRRRRR\n");

}
