// fichero 35354 -- macros y constantes -- MODIFICADO
#define LIMITE_35354 35554
#define FACTOR_35354 6

int aplicar_limite35354(int valor) {
    if (valor > LIMITE_35354) return LIMITE_35354;
    return valor * FACTOR_35354;
}
