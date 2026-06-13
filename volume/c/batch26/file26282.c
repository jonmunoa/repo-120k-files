// fichero 26282 -- macros y constantes
#define LIMITE_26282 26382
#define FACTOR_26282 3

int aplicar_limite26282(int valor) {
    if (valor > LIMITE_26282) return LIMITE_26282;
    return valor * FACTOR_26282;
}
