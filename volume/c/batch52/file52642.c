// fichero 52642 -- macros y constantes
#define LIMITE_52642 52742
#define FACTOR_52642 3

int aplicar_limite52642(int valor) {
    if (valor > LIMITE_52642) return LIMITE_52642;
    return valor * FACTOR_52642;
}
