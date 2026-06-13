// fichero 2166 -- macros y constantes
#define LIMITE_2166 2266
#define FACTOR_2166 2

int aplicar_limite2166(int valor) {
    if (valor > LIMITE_2166) return LIMITE_2166;
    return valor * FACTOR_2166;
}
