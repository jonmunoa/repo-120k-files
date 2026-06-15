// fichero 23766 -- macros y constantes -- MODIFICADO
#define LIMITE_23766 23966
#define FACTOR_23766 3

int aplicar_limite23766(int valor) {
    if (valor > LIMITE_23766) return LIMITE_23766;
    return valor * FACTOR_23766;
}
