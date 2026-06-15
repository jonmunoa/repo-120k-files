// fichero 35142 -- macros y constantes -- MODIFICADO
#define LIMITE_35142 35342
#define FACTOR_35142 4

int aplicar_limite35142(int valor) {
    if (valor > LIMITE_35142) return LIMITE_35142;
    return valor * FACTOR_35142;
}
