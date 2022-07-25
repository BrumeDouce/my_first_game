// monJeu2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
int main()
{
    int rep1 = 0, rep2 = 0, rep3 = 0, rep4 = 0, rep5 = 0;
    printf("Bienvenue a toi jeune aventurier!\n");
    printf("Te voila devant un immence manoir.Veux tu rentrer ?\n(Tapes 1 pour oui ou 2 pour non)\n");
    scanf_s("%d", &rep1);
    if (rep1 == 1) {
        printf("Te voila dans le hall du manoir. Tu apercois une porte a droite, une porte au centre et une porte a gauche.Quelle porte choisis tu?\n(Tapes 1 pour droite/2 pour gauche/3 pour centre)\n");

        scanf_s("%d", &rep2);

        if (rep2 == 2) {
            printf("On va dans la bibliotheque.\nUne horloge semble etrange, mais tu vois egalement une porte au loin. Veux-tu regarder plus en detail l'horloge ou passez vers la porte?\n(Tapes 1 pour horloge/2 pour porte)\n");

            scanf_s("%d", &rep3);
            if (rep3 == 1) {
                printf("Cette horloge est etrange...Anyway! Je rentre chez moi.\nFin.\n");
            }
            else if (rep3 == 2) {
                printf("Tu arrive dans un grand couloir ou tu entends un bruit etrange. En t'approchant, tu apercois un homme pencher par terre sur une personne allongee.\nIl se retourne et tu vois un visage cadaverique. Cette etrange creature se releve et se dirige vers toi, les bras en avant. Que vas tu faire l'attaquer ou fuir?\n(Tapes 1 pour fuir/2 pour attaquer)\n");
            }
            scanf_s("%d", &rep4);

            if (rep4 == 1) {
                printf("Dans ta fuite, tu a tribuche et le zombi t'a mordu.\nGame over");
            }
            else if (rep4 == 2) {
                printf("Tu as reussis à le repousser à l'aide d'un pistolet d'auto defense qui se trouvait miraculeusement à tes pieds. Il restais une balle .22 Magnum à l'interieur.\nOk, cet endroit est trop étrange, tu quittes les lieux en courant.\nFin.");
            }
            else {
                printf("Qu'est ce que tu me baragouine? reviens jouer quand tu seras sobre.\n");
            }

        }
        else if (rep2 == 1) {
            printf("On va dans la cuisine\nUn nain avec un ciseau s'avance vers toi, tu attends qu'il vienne vers toi ou tu fuis?\n(Tapes 1 pour attendre/2 pour fuir)");

            scanf_s("%d", &rep5);
            if (rep5 == 1) {
                printf("Il t'a plante avec son ciseau, tu meurs d'une hemoragie. Toujours se mefier des nains à ciseaux.\nGame over.\n");
            }
            else if (rep5 == 2) {
                printf("Te revoila dans le hall. Mais attends! le nain ressurgit et te plante avec son ciseau! Triste fin pour toi.\nGame over.\n");
            }
            else {
                printf("Qu'est ce que tu me baragouine? reviens jouer quand tu seras sobre\n");
            }
        }
        else if (rep2 == 3) {
            printf("Tu te retrouve dans la cour. Tu as a peine le temps de regarder une jolie rose qu'une plante géante te dévore! Aie! Game over.\n");
        }
        else {
            printf("Vous etes perdu...\nGame over.");
        }
    }
    else if (rep1 == 2) {
        printf("Tu te fais manger par des dobermanns enrages qui rodaient dans le coin. Mauvais tobys!\nGame over.\n");
    }
    else {
        printf("Vous etes perdu...\nGame over.");
    }
}
