// fichero 35282 -- macros y constantes -- MODIFICADO
#define LIMITE_35282 35482
#define FACTOR_35282 4

int aplicar_limite35282(int valor) {
    if (valor > LIMITE_35282) return LIMITE_35282;
    return valor * FACTOR_35282;
}
