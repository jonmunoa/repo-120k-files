// fichero 28074 -- macros y constantes
#define LIMITE_28074 28174
#define FACTOR_28074 5

int aplicar_limite28074(int valor) {
    if (valor > LIMITE_28074) return LIMITE_28074;
    return valor * FACTOR_28074;
}
