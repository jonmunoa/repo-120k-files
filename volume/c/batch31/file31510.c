// fichero 31510 -- macros y constantes -- MODIFICADO
#define LIMITE_31510 31710
#define FACTOR_31510 2

int aplicar_limite31510(int valor) {
    if (valor > LIMITE_31510) return LIMITE_31510;
    return valor * FACTOR_31510;
}
