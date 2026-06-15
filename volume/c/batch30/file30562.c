// fichero 30562 -- macros y constantes -- MODIFICADO
#define LIMITE_30562 30762
#define FACTOR_30562 4

int aplicar_limite30562(int valor) {
    if (valor > LIMITE_30562) return LIMITE_30562;
    return valor * FACTOR_30562;
}
