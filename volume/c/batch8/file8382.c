// fichero 8382 -- macros y constantes
#define LIMITE_8382 8482
#define FACTOR_8382 3

int aplicar_limite8382(int valor) {
    if (valor > LIMITE_8382) return LIMITE_8382;
    return valor * FACTOR_8382;
}
