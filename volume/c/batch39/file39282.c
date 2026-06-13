// fichero 39282 -- macros y constantes
#define LIMITE_39282 39382
#define FACTOR_39282 3

int aplicar_limite39282(int valor) {
    if (valor > LIMITE_39282) return LIMITE_39282;
    return valor * FACTOR_39282;
}
