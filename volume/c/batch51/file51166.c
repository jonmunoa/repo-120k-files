// fichero 51166 -- macros y constantes
#define LIMITE_51166 51266
#define FACTOR_51166 2

int aplicar_limite51166(int valor) {
    if (valor > LIMITE_51166) return LIMITE_51166;
    return valor * FACTOR_51166;
}
