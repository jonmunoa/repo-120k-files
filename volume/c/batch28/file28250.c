// fichero 28250 -- macros y constantes
#define LIMITE_28250 28350
#define FACTOR_28250 1

int aplicar_limite28250(int valor) {
    if (valor > LIMITE_28250) return LIMITE_28250;
    return valor * FACTOR_28250;
}
