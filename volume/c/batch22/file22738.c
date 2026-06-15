// fichero 22738 -- macros y constantes -- MODIFICADO
#define LIMITE_22738 22938
#define FACTOR_22738 5

int aplicar_limite22738(int valor) {
    if (valor > LIMITE_22738) return LIMITE_22738;
    return valor * FACTOR_22738;
}
