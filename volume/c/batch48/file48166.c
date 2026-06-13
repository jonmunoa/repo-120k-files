// fichero 48166 -- macros y constantes
#define LIMITE_48166 48266
#define FACTOR_48166 2

int aplicar_limite48166(int valor) {
    if (valor > LIMITE_48166) return LIMITE_48166;
    return valor * FACTOR_48166;
}
