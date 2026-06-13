// fichero 13282 -- macros y constantes
#define LIMITE_13282 13382
#define FACTOR_13282 3

int aplicar_limite13282(int valor) {
    if (valor > LIMITE_13282) return LIMITE_13282;
    return valor * FACTOR_13282;
}
