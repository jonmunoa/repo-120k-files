// fichero 45766 -- macros y constantes -- MODIFICADO
#define LIMITE_45766 45966
#define FACTOR_45766 3

int aplicar_limite45766(int valor) {
    if (valor > LIMITE_45766) return LIMITE_45766;
    return valor * FACTOR_45766;
}
