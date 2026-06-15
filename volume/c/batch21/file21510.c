// fichero 21510 -- macros y constantes -- MODIFICADO
#define LIMITE_21510 21710
#define FACTOR_21510 2

int aplicar_limite21510(int valor) {
    if (valor > LIMITE_21510) return LIMITE_21510;
    return valor * FACTOR_21510;
}
