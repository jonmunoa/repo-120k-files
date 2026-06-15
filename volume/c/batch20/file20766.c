// fichero 20766 -- macros y constantes -- MODIFICADO
#define LIMITE_20766 20966
#define FACTOR_20766 3

int aplicar_limite20766(int valor) {
    if (valor > LIMITE_20766) return LIMITE_20766;
    return valor * FACTOR_20766;
}
