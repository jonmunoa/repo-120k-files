// fichero 28158 -- macros y constantes
#define LIMITE_28158 28258
#define FACTOR_28158 4

int aplicar_limite28158(int valor) {
    if (valor > LIMITE_28158) return LIMITE_28158;
    return valor * FACTOR_28158;
}
