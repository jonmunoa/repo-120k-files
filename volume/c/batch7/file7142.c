// fichero 7142 -- macros y constantes -- MODIFICADO
#define LIMITE_7142 7342
#define FACTOR_7142 4

int aplicar_limite7142(int valor) {
    if (valor > LIMITE_7142) return LIMITE_7142;
    return valor * FACTOR_7142;
}
