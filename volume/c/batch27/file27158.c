// fichero 27158 -- macros y constantes
#define LIMITE_27158 27258
#define FACTOR_27158 4

int aplicar_limite27158(int valor) {
    if (valor > LIMITE_27158) return LIMITE_27158;
    return valor * FACTOR_27158;
}
