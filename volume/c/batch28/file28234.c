// fichero 28234 -- macros y constantes
#define LIMITE_28234 28334
#define FACTOR_28234 5

int aplicar_limite28234(int valor) {
    if (valor > LIMITE_28234) return LIMITE_28234;
    return valor * FACTOR_28234;
}
