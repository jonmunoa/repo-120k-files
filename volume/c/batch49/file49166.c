// fichero 49166 -- macros y constantes
#define LIMITE_49166 49266
#define FACTOR_49166 2

int aplicar_limite49166(int valor) {
    if (valor > LIMITE_49166) return LIMITE_49166;
    return valor * FACTOR_49166;
}
