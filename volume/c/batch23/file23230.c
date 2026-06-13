// fichero 23230 -- macros y constantes
#define LIMITE_23230 23330
#define FACTOR_23230 1

int aplicar_limite23230(int valor) {
    if (valor > LIMITE_23230) return LIMITE_23230;
    return valor * FACTOR_23230;
}
