// fichero 39282 -- macros y constantes -- MODIFICADO
#define LIMITE_39282 39482
#define FACTOR_39282 4

int aplicar_limite39282(int valor) {
    if (valor > LIMITE_39282) return LIMITE_39282;
    return valor * FACTOR_39282;
}
