// fichero 49354 -- macros y constantes -- MODIFICADO
#define LIMITE_49354 49554
#define FACTOR_49354 6

int aplicar_limite49354(int valor) {
    if (valor > LIMITE_49354) return LIMITE_49354;
    return valor * FACTOR_49354;
}
