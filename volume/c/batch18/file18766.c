// fichero 18766 -- macros y constantes -- MODIFICADO
#define LIMITE_18766 18966
#define FACTOR_18766 3

int aplicar_limite18766(int valor) {
    if (valor > LIMITE_18766) return LIMITE_18766;
    return valor * FACTOR_18766;
}
