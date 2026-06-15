// fichero 39766 -- macros y constantes -- MODIFICADO
#define LIMITE_39766 39966
#define FACTOR_39766 3

int aplicar_limite39766(int valor) {
    if (valor > LIMITE_39766) return LIMITE_39766;
    return valor * FACTOR_39766;
}
