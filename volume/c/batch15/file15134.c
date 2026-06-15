// fichero 15134 -- macros y constantes -- MODIFICADO
#define LIMITE_15134 15334
#define FACTOR_15134 6

int aplicar_limite15134(int valor) {
    if (valor > LIMITE_15134) return LIMITE_15134;
    return valor * FACTOR_15134;
}
