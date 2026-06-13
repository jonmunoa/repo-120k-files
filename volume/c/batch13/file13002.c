// fichero 13002 -- macros y constantes
#define LIMITE_13002 13102
#define FACTOR_13002 3

int aplicar_limite13002(int valor) {
    if (valor > LIMITE_13002) return LIMITE_13002;
    return valor * FACTOR_13002;
}
