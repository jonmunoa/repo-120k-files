// fichero 32530 -- macros y constantes -- MODIFICADO
#define LIMITE_32530 32730
#define FACTOR_32530 2

int aplicar_limite32530(int valor) {
    if (valor > LIMITE_32530) return LIMITE_32530;
    return valor * FACTOR_32530;
}
