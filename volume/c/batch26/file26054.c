// fichero 26054 -- macros y constantes
#define LIMITE_26054 26154
#define FACTOR_26054 5

int aplicar_limite26054(int valor) {
    if (valor > LIMITE_26054) return LIMITE_26054;
    return valor * FACTOR_26054;
}
