// fichero 1790 -- macros y constantes
#define LIMITE_1790 1890
#define FACTOR_1790 1

int aplicar_limite1790(int valor) {
    if (valor > LIMITE_1790) return LIMITE_1790;
    return valor * FACTOR_1790;
}
