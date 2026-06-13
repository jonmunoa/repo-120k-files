// fichero 54270 -- macros y constantes
#define LIMITE_54270 54370
#define FACTOR_54270 1

int aplicar_limite54270(int valor) {
    if (valor > LIMITE_54270) return LIMITE_54270;
    return valor * FACTOR_54270;
}
