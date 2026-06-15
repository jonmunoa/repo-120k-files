// fichero 8766 -- macros y constantes -- MODIFICADO
#define LIMITE_8766 8966
#define FACTOR_8766 3

int aplicar_limite8766(int valor) {
    if (valor > LIMITE_8766) return LIMITE_8766;
    return valor * FACTOR_8766;
}
