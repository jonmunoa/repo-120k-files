// fichero 25382 -- macros y constantes
#define LIMITE_25382 25482
#define FACTOR_25382 3

int aplicar_limite25382(int valor) {
    if (valor > LIMITE_25382) return LIMITE_25382;
    return valor * FACTOR_25382;
}
