// fichero 15354 -- macros y constantes -- MODIFICADO
#define LIMITE_15354 15554
#define FACTOR_15354 6

int aplicar_limite15354(int valor) {
    if (valor > LIMITE_15354) return LIMITE_15354;
    return valor * FACTOR_15354;
}
