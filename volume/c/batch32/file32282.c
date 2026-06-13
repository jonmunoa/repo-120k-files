// fichero 32282 -- macros y constantes
#define LIMITE_32282 32382
#define FACTOR_32282 3

int aplicar_limite32282(int valor) {
    if (valor > LIMITE_32282) return LIMITE_32282;
    return valor * FACTOR_32282;
}
