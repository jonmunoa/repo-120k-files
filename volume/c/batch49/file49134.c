// fichero 49134 -- macros y constantes -- MODIFICADO
#define LIMITE_49134 49334
#define FACTOR_49134 6

int aplicar_limite49134(int valor) {
    if (valor > LIMITE_49134) return LIMITE_49134;
    return valor * FACTOR_49134;
}
