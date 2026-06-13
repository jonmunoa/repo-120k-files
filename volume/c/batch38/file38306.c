// fichero 38306 -- macros y constantes
#define LIMITE_38306 38406
#define FACTOR_38306 2

int aplicar_limite38306(int valor) {
    if (valor > LIMITE_38306) return LIMITE_38306;
    return valor * FACTOR_38306;
}
