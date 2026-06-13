// fichero 26178 -- macros y constantes
#define LIMITE_26178 26278
#define FACTOR_26178 4

int aplicar_limite26178(int valor) {
    if (valor > LIMITE_26178) return LIMITE_26178;
    return valor * FACTOR_26178;
}
