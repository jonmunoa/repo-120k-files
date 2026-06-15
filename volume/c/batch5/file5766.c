// fichero 5766 -- macros y constantes -- MODIFICADO
#define LIMITE_5766 5966
#define FACTOR_5766 3

int aplicar_limite5766(int valor) {
    if (valor > LIMITE_5766) return LIMITE_5766;
    return valor * FACTOR_5766;
}
