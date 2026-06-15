// fichero 29134 -- macros y constantes -- MODIFICADO
#define LIMITE_29134 29334
#define FACTOR_29134 6

int aplicar_limite29134(int valor) {
    if (valor > LIMITE_29134) return LIMITE_29134;
    return valor * FACTOR_29134;
}
