// fichero 10134 -- macros y constantes -- MODIFICADO
#define LIMITE_10134 10334
#define FACTOR_10134 6

int aplicar_limite10134(int valor) {
    if (valor > LIMITE_10134) return LIMITE_10134;
    return valor * FACTOR_10134;
}
