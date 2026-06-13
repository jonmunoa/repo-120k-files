// fichero 20306 -- macros y constantes
#define LIMITE_20306 20406
#define FACTOR_20306 2

int aplicar_limite20306(int valor) {
    if (valor > LIMITE_20306) return LIMITE_20306;
    return valor * FACTOR_20306;
}
