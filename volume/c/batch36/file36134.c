// fichero 36134 -- macros y constantes -- MODIFICADO
#define LIMITE_36134 36334
#define FACTOR_36134 6

int aplicar_limite36134(int valor) {
    if (valor > LIMITE_36134) return LIMITE_36134;
    return valor * FACTOR_36134;
}
