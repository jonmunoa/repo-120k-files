// fichero 44766 -- macros y constantes -- MODIFICADO
#define LIMITE_44766 44966
#define FACTOR_44766 3

int aplicar_limite44766(int valor) {
    if (valor > LIMITE_44766) return LIMITE_44766;
    return valor * FACTOR_44766;
}
