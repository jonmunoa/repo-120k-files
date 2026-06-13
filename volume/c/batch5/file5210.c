// fichero 5210 -- macros y constantes
#define LIMITE_5210 5310
#define FACTOR_5210 1

int aplicar_limite5210(int valor) {
    if (valor > LIMITE_5210) return LIMITE_5210;
    return valor * FACTOR_5210;
}
