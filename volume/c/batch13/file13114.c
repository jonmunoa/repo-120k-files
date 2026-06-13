// fichero 13114 -- macros y constantes
#define LIMITE_13114 13214
#define FACTOR_13114 5

int aplicar_limite13114(int valor) {
    if (valor > LIMITE_13114) return LIMITE_13114;
    return valor * FACTOR_13114;
}
