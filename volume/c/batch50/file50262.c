// fichero 50262 -- macros y constantes
#define LIMITE_50262 50362
#define FACTOR_50262 3

int aplicar_limite50262(int valor) {
    if (valor > LIMITE_50262) return LIMITE_50262;
    return valor * FACTOR_50262;
}
