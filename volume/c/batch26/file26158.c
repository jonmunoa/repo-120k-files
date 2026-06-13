// fichero 26158 -- macros y constantes
#define LIMITE_26158 26258
#define FACTOR_26158 4

int aplicar_limite26158(int valor) {
    if (valor > LIMITE_26158) return LIMITE_26158;
    return valor * FACTOR_26158;
}
