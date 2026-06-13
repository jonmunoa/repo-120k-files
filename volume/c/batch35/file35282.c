// fichero 35282 -- macros y constantes
#define LIMITE_35282 35382
#define FACTOR_35282 3

int aplicar_limite35282(int valor) {
    if (valor > LIMITE_35282) return LIMITE_35282;
    return valor * FACTOR_35282;
}
