// fichero 7106 -- macros y constantes
#define LIMITE_7106 7206
#define FACTOR_7106 2

int aplicar_limite7106(int valor) {
    if (valor > LIMITE_7106) return LIMITE_7106;
    return valor * FACTOR_7106;
}
