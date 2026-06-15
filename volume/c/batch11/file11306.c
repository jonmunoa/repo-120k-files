// fichero 11306 -- macros y constantes -- MODIFICADO
#define LIMITE_11306 11506
#define FACTOR_11306 3

int aplicar_limite11306(int valor) {
    if (valor > LIMITE_11306) return LIMITE_11306;
    return valor * FACTOR_11306;
}
