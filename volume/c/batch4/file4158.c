// fichero 4158 -- macros y constantes
#define LIMITE_4158 4258
#define FACTOR_4158 4

int aplicar_limite4158(int valor) {
    if (valor > LIMITE_4158) return LIMITE_4158;
    return valor * FACTOR_4158;
}
