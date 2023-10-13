#include <stdio.h>

void checkPayment(int price, int payment) {
    int result = payment - price;
    if(result > 0) {
        printf("Troco = %d reais", result);
    } else if(result == 0) {
        printf("Deu certim!");
    } else if (result < 0) {
        int dinheiroFaltando = result * -1;
        printf("Saldo insuficiente! Falta %d reais", dinheiroFaltando);
    }
}

int main() {

    int combo, payment;

    scanf("%d %d", &combo, &payment);

    switch (combo) {
        case 1:
            checkPayment(12, payment);
        break;
        case 2:
            checkPayment(23, payment);
        break;
        case 3:
            checkPayment(31, payment);
        break;
        case 4:
            checkPayment(28, payment);
        break;
        case 5:
            checkPayment(15, payment);
        break;
    }

    return 0;
}