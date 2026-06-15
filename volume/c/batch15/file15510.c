// fichero 15510 -- macros y constantes -- MODIFICADO
#define LIMITE_15510 15710
#define FACTOR_15510 2

int aplicar_limite15510(int valor) {
    if (valor > LIMITE_15510) return LIMITE_15510;
    return valor * FACTOR_15510;
}
