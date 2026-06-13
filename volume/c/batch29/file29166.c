// fichero 29166 -- macros y constantes
#define LIMITE_29166 29266
#define FACTOR_29166 2

int aplicar_limite29166(int valor) {
    if (valor > LIMITE_29166) return LIMITE_29166;
    return valor * FACTOR_29166;
}
