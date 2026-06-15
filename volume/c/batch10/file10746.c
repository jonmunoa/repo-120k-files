// fichero 10746 -- macros y constantes -- MODIFICADO
#define LIMITE_10746 10946
#define FACTOR_10746 3

int aplicar_limite10746(int valor) {
    if (valor > LIMITE_10746) return LIMITE_10746;
    return valor * FACTOR_10746;
}
