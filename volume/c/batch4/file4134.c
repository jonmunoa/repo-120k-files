// fichero 4134 -- macros y constantes -- MODIFICADO
#define LIMITE_4134 4334
#define FACTOR_4134 6

int aplicar_limite4134(int valor) {
    if (valor > LIMITE_4134) return LIMITE_4134;
    return valor * FACTOR_4134;
}
