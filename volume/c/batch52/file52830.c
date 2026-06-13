// fichero 52830 -- macros y constantes
#define LIMITE_52830 52930
#define FACTOR_52830 1

int aplicar_limite52830(int valor) {
    if (valor > LIMITE_52830) return LIMITE_52830;
    return valor * FACTOR_52830;
}
