// fichero 4306 -- macros y constantes
#define LIMITE_4306 4406
#define FACTOR_4306 2

int aplicar_limite4306(int valor) {
    if (valor > LIMITE_4306) return LIMITE_4306;
    return valor * FACTOR_4306;
}
