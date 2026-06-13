// fichero 32530 -- macros y constantes
#define LIMITE_32530 32630
#define FACTOR_32530 1

int aplicar_limite32530(int valor) {
    if (valor > LIMITE_32530) return LIMITE_32530;
    return valor * FACTOR_32530;
}
