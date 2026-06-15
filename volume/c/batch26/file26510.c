// fichero 26510 -- macros y constantes -- MODIFICADO
#define LIMITE_26510 26710
#define FACTOR_26510 2

int aplicar_limite26510(int valor) {
    if (valor > LIMITE_26510) return LIMITE_26510;
    return valor * FACTOR_26510;
}
