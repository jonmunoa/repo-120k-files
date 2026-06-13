// fichero 12166 -- macros y constantes
#define LIMITE_12166 12266
#define FACTOR_12166 2

int aplicar_limite12166(int valor) {
    if (valor > LIMITE_12166) return LIMITE_12166;
    return valor * FACTOR_12166;
}
