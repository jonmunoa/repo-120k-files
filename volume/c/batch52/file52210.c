// fichero 52210 -- macros y constantes
#define LIMITE_52210 52310
#define FACTOR_52210 1

int aplicar_limite52210(int valor) {
    if (valor > LIMITE_52210) return LIMITE_52210;
    return valor * FACTOR_52210;
}
