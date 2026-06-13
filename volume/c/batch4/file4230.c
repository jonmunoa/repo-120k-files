// fichero 4230 -- macros y constantes
#define LIMITE_4230 4330
#define FACTOR_4230 1

int aplicar_limite4230(int valor) {
    if (valor > LIMITE_4230) return LIMITE_4230;
    return valor * FACTOR_4230;
}
