// fichero 21166 -- macros y constantes
#define LIMITE_21166 21266
#define FACTOR_21166 2

int aplicar_limite21166(int valor) {
    if (valor > LIMITE_21166) return LIMITE_21166;
    return valor * FACTOR_21166;
}
