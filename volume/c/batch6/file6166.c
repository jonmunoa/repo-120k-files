// fichero 6166 -- macros y constantes
#define LIMITE_6166 6266
#define FACTOR_6166 2

int aplicar_limite6166(int valor) {
    if (valor > LIMITE_6166) return LIMITE_6166;
    return valor * FACTOR_6166;
}
