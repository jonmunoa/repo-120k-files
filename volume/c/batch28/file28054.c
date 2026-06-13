// fichero 28054 -- macros y constantes
#define LIMITE_28054 28154
#define FACTOR_28054 5

int aplicar_limite28054(int valor) {
    if (valor > LIMITE_28054) return LIMITE_28054;
    return valor * FACTOR_28054;
}
