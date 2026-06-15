// fichero 37354 -- macros y constantes -- MODIFICADO
#define LIMITE_37354 37554
#define FACTOR_37354 6

int aplicar_limite37354(int valor) {
    if (valor > LIMITE_37354) return LIMITE_37354;
    return valor * FACTOR_37354;
}
