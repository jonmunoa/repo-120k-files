// fichero 16058 -- macros y constantes
#define LIMITE_16058 16158
#define FACTOR_16058 4

int aplicar_limite16058(int valor) {
    if (valor > LIMITE_16058) return LIMITE_16058;
    return valor * FACTOR_16058;
}
