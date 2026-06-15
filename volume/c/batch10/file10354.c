// fichero 10354 -- macros y constantes -- MODIFICADO
#define LIMITE_10354 10554
#define FACTOR_10354 6

int aplicar_limite10354(int valor) {
    if (valor > LIMITE_10354) return LIMITE_10354;
    return valor * FACTOR_10354;
}
