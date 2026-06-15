// fichero 8434 -- macros y constantes -- MODIFICADO
#define LIMITE_8434 8634
#define FACTOR_8434 6

int aplicar_limite8434(int valor) {
    if (valor > LIMITE_8434) return LIMITE_8434;
    return valor * FACTOR_8434;
}
