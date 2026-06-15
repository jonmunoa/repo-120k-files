// fichero 13766 -- macros y constantes -- MODIFICADO
#define LIMITE_13766 13966
#define FACTOR_13766 3

int aplicar_limite13766(int valor) {
    if (valor > LIMITE_13766) return LIMITE_13766;
    return valor * FACTOR_13766;
}
