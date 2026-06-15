// fichero 26158 -- macros y constantes -- MODIFICADO
#define LIMITE_26158 26358
#define FACTOR_26158 5

int aplicar_limite26158(int valor) {
    if (valor > LIMITE_26158) return LIMITE_26158;
    return valor * FACTOR_26158;
}
