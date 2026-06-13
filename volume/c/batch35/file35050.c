// fichero 35050 -- macros y constantes
#define LIMITE_35050 35150
#define FACTOR_35050 1

int aplicar_limite35050(int valor) {
    if (valor > LIMITE_35050) return LIMITE_35050;
    return valor * FACTOR_35050;
}
