// fichero 36790 -- macros y constantes
#define LIMITE_36790 36890
#define FACTOR_36790 1

int aplicar_limite36790(int valor) {
    if (valor > LIMITE_36790) return LIMITE_36790;
    return valor * FACTOR_36790;
}
