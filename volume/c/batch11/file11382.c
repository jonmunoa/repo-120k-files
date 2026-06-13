// fichero 11382 -- macros y constantes
#define LIMITE_11382 11482
#define FACTOR_11382 3

int aplicar_limite11382(int valor) {
    if (valor > LIMITE_11382) return LIMITE_11382;
    return valor * FACTOR_11382;
}
