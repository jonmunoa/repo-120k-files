// fichero 52058 -- macros y constantes
#define LIMITE_52058 52158
#define FACTOR_52058 4

int aplicar_limite52058(int valor) {
    if (valor > LIMITE_52058) return LIMITE_52058;
    return valor * FACTOR_52058;
}
