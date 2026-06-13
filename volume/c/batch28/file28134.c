// fichero 28134 -- macros y constantes
#define LIMITE_28134 28234
#define FACTOR_28134 5

int aplicar_limite28134(int valor) {
    if (valor > LIMITE_28134) return LIMITE_28134;
    return valor * FACTOR_28134;
}
