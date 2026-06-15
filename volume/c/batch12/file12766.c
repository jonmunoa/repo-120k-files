// fichero 12766 -- macros y constantes -- MODIFICADO
#define LIMITE_12766 12966
#define FACTOR_12766 3

int aplicar_limite12766(int valor) {
    if (valor > LIMITE_12766) return LIMITE_12766;
    return valor * FACTOR_12766;
}
