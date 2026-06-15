// fichero 7354 -- macros y constantes -- MODIFICADO
#define LIMITE_7354 7554
#define FACTOR_7354 6

int aplicar_limite7354(int valor) {
    if (valor > LIMITE_7354) return LIMITE_7354;
    return valor * FACTOR_7354;
}
