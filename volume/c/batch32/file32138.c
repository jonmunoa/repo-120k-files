// fichero 32138 -- macros y constantes
#define LIMITE_32138 32238
#define FACTOR_32138 4

int aplicar_limite32138(int valor) {
    if (valor > LIMITE_32138) return LIMITE_32138;
    return valor * FACTOR_32138;
}
