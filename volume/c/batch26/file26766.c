// fichero 26766 -- macros y constantes -- MODIFICADO
#define LIMITE_26766 26966
#define FACTOR_26766 3

int aplicar_limite26766(int valor) {
    if (valor > LIMITE_26766) return LIMITE_26766;
    return valor * FACTOR_26766;
}
