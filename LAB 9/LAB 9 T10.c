#include<stdio.h>
int basicAttack(int dmg, int hp) {
    hp -= dmg;
    printf("Basic Attack! You dealt %d damage.\n", dmg);
    return hp;
}
int powerStrike(int dmg, int hp) {
    int totalDmg = dmg * 2.5;
    hp -= totalDmg;
    printf("Power Strike! You dealt %d damage.\n", totalDmg);
    return hp;
}
int heal(int dmg, int hp) {
    hp += 20;
    printf("Heal! You restored 20 HP.\n");
    return hp;
}
int poisonAttack(int dmg, int hp) {
    int totalDmg = dmg / 2;
    hp -= totalDmg;
    printf("Poison Attack! You dealt %d damage and inflicted poison.\n", totalDmg);
    return hp;
}
int main() {
    int hp = 100, dmg = 25, choice;
    int (*action)(int, int);
    for (int turn = 1; turn <= 3; turn++) {
        printf("\nTurn %d - Current HP: %d\n", turn, hp);
        printf("1. Basic Attack\n2. Power Strike\n3. Heal\n4. Poison Attack\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: action = basicAttack; break;
            case 2: action = powerStrike; break;
            case 3: action = heal; break;
            case 4: action = poisonAttack; break;
            default: action = basicAttack;
        }

        hp = action(dmg, hp);

        if (hp <= 0) {
            printf("You have been defeated!\n");
            break;
        }
    }
    printf("\nFinal HP: %d\n", hp);
}