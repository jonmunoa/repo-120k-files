// fichero 26354 -- macros y constantes -- MODIFICADO
#define LIMITE_26354 26554
#define FACTOR_26354 6

int aplicar_limite26354(int valor) {
    if (valor > LIMITE_26354) return LIMITE_26354;
    return valor * FACTOR_26354;
}
