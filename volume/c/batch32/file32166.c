// fichero 32166 -- macros y constantes
#define LIMITE_32166 32266
#define FACTOR_32166 2

int aplicar_limite32166(int valor) {
    if (valor > LIMITE_32166) return LIMITE_32166;
    return valor * FACTOR_32166;
}
