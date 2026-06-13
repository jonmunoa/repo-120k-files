// fichero 10490 -- macros y constantes
#define LIMITE_10490 10590
#define FACTOR_10490 1

int aplicar_limite10490(int valor) {
    if (valor > LIMITE_10490) return LIMITE_10490;
    return valor * FACTOR_10490;
}
