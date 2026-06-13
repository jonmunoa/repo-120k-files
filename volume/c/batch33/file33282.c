// fichero 33282 -- macros y constantes
#define LIMITE_33282 33382
#define FACTOR_33282 3

int aplicar_limite33282(int valor) {
    if (valor > LIMITE_33282) return LIMITE_33282;
    return valor * FACTOR_33282;
}
