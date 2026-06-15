// fichero 46766 -- macros y constantes -- MODIFICADO
#define LIMITE_46766 46966
#define FACTOR_46766 3

int aplicar_limite46766(int valor) {
    if (valor > LIMITE_46766) return LIMITE_46766;
    return valor * FACTOR_46766;
}
