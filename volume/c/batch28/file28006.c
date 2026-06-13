// fichero 28006 -- macros y constantes
#define LIMITE_28006 28106
#define FACTOR_28006 2

int aplicar_limite28006(int valor) {
    if (valor > LIMITE_28006) return LIMITE_28006;
    return valor * FACTOR_28006;
}
