// fichero 13166 -- macros y constantes
#define LIMITE_13166 13266
#define FACTOR_13166 2

int aplicar_limite13166(int valor) {
    if (valor > LIMITE_13166) return LIMITE_13166;
    return valor * FACTOR_13166;
}
