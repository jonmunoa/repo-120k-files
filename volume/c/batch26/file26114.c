// fichero 26114 -- macros y constantes
#define LIMITE_26114 26214
#define FACTOR_26114 5

int aplicar_limite26114(int valor) {
    if (valor > LIMITE_26114) return LIMITE_26114;
    return valor * FACTOR_26114;
}
