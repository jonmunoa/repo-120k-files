// fichero 21766 -- macros y constantes -- MODIFICADO
#define LIMITE_21766 21966
#define FACTOR_21766 3

int aplicar_limite21766(int valor) {
    if (valor > LIMITE_21766) return LIMITE_21766;
    return valor * FACTOR_21766;
}
