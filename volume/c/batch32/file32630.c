// fichero 32630 -- macros y constantes
#define LIMITE_32630 32730
#define FACTOR_32630 1

int aplicar_limite32630(int valor) {
    if (valor > LIMITE_32630) return LIMITE_32630;
    return valor * FACTOR_32630;
}
