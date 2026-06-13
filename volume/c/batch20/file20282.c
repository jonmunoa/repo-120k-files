// fichero 20282 -- macros y constantes
#define LIMITE_20282 20382
#define FACTOR_20282 3

int aplicar_limite20282(int valor) {
    if (valor > LIMITE_20282) return LIMITE_20282;
    return valor * FACTOR_20282;
}
