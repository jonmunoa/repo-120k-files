// fichero 11306 -- macros y constantes
#define LIMITE_11306 11406
#define FACTOR_11306 2

int aplicar_limite11306(int valor) {
    if (valor > LIMITE_11306) return LIMITE_11306;
    return valor * FACTOR_11306;
}
