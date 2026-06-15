// fichero 12354 -- macros y constantes -- MODIFICADO
#define LIMITE_12354 12554
#define FACTOR_12354 6

int aplicar_limite12354(int valor) {
    if (valor > LIMITE_12354) return LIMITE_12354;
    return valor * FACTOR_12354;
}
