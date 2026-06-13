// fichero 35142 -- macros y constantes
#define LIMITE_35142 35242
#define FACTOR_35142 3

int aplicar_limite35142(int valor) {
    if (valor > LIMITE_35142) return LIMITE_35142;
    return valor * FACTOR_35142;
}
