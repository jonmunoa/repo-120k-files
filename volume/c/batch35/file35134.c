// fichero 35134 -- macros y constantes -- MODIFICADO
#define LIMITE_35134 35334
#define FACTOR_35134 6

int aplicar_limite35134(int valor) {
    if (valor > LIMITE_35134) return LIMITE_35134;
    return valor * FACTOR_35134;
}
