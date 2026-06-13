// fichero 7238 -- macros y constantes
#define LIMITE_7238 7338
#define FACTOR_7238 4

int aplicar_limite7238(int valor) {
    if (valor > LIMITE_7238) return LIMITE_7238;
    return valor * FACTOR_7238;
}
