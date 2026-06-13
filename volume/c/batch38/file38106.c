// fichero 38106 -- macros y constantes
#define LIMITE_38106 38206
#define FACTOR_38106 2

int aplicar_limite38106(int valor) {
    if (valor > LIMITE_38106) return LIMITE_38106;
    return valor * FACTOR_38106;
}
