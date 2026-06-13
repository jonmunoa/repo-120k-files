// fichero 14282 -- macros y constantes
#define LIMITE_14282 14382
#define FACTOR_14282 3

int aplicar_limite14282(int valor) {
    if (valor > LIMITE_14282) return LIMITE_14282;
    return valor * FACTOR_14282;
}
