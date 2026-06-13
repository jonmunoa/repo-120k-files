// fichero 306 -- macros y constantes
#define LIMITE_306 406
#define FACTOR_306 2

int aplicar_limite306(int valor) {
    if (valor > LIMITE_306) return LIMITE_306;
    return valor * FACTOR_306;
}
