// fichero 13282 -- macros y constantes -- MODIFICADO
#define LIMITE_13282 13482
#define FACTOR_13282 4

int aplicar_limite13282(int valor) {
    if (valor > LIMITE_13282) return LIMITE_13282;
    return valor * FACTOR_13282;
}
