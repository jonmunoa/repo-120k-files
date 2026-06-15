// fichero 22766 -- macros y constantes -- MODIFICADO
#define LIMITE_22766 22966
#define FACTOR_22766 3

int aplicar_limite22766(int valor) {
    if (valor > LIMITE_22766) return LIMITE_22766;
    return valor * FACTOR_22766;
}
