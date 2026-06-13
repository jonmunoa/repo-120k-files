// fichero 52050 -- macros y constantes
#define LIMITE_52050 52150
#define FACTOR_52050 1

int aplicar_limite52050(int valor) {
    if (valor > LIMITE_52050) return LIMITE_52050;
    return valor * FACTOR_52050;
}
