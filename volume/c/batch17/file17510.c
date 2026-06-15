// fichero 17510 -- macros y constantes -- MODIFICADO
#define LIMITE_17510 17710
#define FACTOR_17510 2

int aplicar_limite17510(int valor) {
    if (valor > LIMITE_17510) return LIMITE_17510;
    return valor * FACTOR_17510;
}
