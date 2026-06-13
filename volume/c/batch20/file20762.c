// fichero 20762 -- macros y constantes
#define LIMITE_20762 20862
#define FACTOR_20762 3

int aplicar_limite20762(int valor) {
    if (valor > LIMITE_20762) return LIMITE_20762;
    return valor * FACTOR_20762;
}
