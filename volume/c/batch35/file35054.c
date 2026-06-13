// fichero 35054 -- macros y constantes
#define LIMITE_35054 35154
#define FACTOR_35054 5

int aplicar_limite35054(int valor) {
    if (valor > LIMITE_35054) return LIMITE_35054;
    return valor * FACTOR_35054;
}
