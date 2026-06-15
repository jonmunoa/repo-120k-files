// fichero 31354 -- macros y constantes -- MODIFICADO
#define LIMITE_31354 31554
#define FACTOR_31354 6

int aplicar_limite31354(int valor) {
    if (valor > LIMITE_31354) return LIMITE_31354;
    return valor * FACTOR_31354;
}
