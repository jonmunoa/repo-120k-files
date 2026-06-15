// fichero 18774 -- macros y constantes -- MODIFICADO
#define LIMITE_18774 18974
#define FACTOR_18774 6

int aplicar_limite18774(int valor) {
    if (valor > LIMITE_18774) return LIMITE_18774;
    return valor * FACTOR_18774;
}
