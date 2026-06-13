// fichero 28106 -- macros y constantes
#define LIMITE_28106 28206
#define FACTOR_28106 2

int aplicar_limite28106(int valor) {
    if (valor > LIMITE_28106) return LIMITE_28106;
    return valor * FACTOR_28106;
}
