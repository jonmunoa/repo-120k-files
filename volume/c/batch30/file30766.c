// fichero 30766 -- macros y constantes -- MODIFICADO
#define LIMITE_30766 30966
#define FACTOR_30766 3

int aplicar_limite30766(int valor) {
    if (valor > LIMITE_30766) return LIMITE_30766;
    return valor * FACTOR_30766;
}
