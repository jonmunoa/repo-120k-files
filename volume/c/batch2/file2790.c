// fichero 2790 -- macros y constantes
#define LIMITE_2790 2890
#define FACTOR_2790 1

int aplicar_limite2790(int valor) {
    if (valor > LIMITE_2790) return LIMITE_2790;
    return valor * FACTOR_2790;
}
