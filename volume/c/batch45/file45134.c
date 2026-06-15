// fichero 45134 -- macros y constantes -- MODIFICADO
#define LIMITE_45134 45334
#define FACTOR_45134 6

int aplicar_limite45134(int valor) {
    if (valor > LIMITE_45134) return LIMITE_45134;
    return valor * FACTOR_45134;
}
