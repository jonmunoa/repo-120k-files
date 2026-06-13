// fichero 26562 -- macros y constantes
#define LIMITE_26562 26662
#define FACTOR_26562 3

int aplicar_limite26562(int valor) {
    if (valor > LIMITE_26562) return LIMITE_26562;
    return valor * FACTOR_26562;
}
