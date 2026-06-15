// fichero 31766 -- macros y constantes -- MODIFICADO
#define LIMITE_31766 31966
#define FACTOR_31766 3

int aplicar_limite31766(int valor) {
    if (valor > LIMITE_31766) return LIMITE_31766;
    return valor * FACTOR_31766;
}
