// fichero 8050 -- macros y constantes
#define LIMITE_8050 8150
#define FACTOR_8050 1

int aplicar_limite8050(int valor) {
    if (valor > LIMITE_8050) return LIMITE_8050;
    return valor * FACTOR_8050;
}
