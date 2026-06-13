// fichero 30562 -- macros y constantes
#define LIMITE_30562 30662
#define FACTOR_30562 3

int aplicar_limite30562(int valor) {
    if (valor > LIMITE_30562) return LIMITE_30562;
    return valor * FACTOR_30562;
}
