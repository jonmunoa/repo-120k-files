// fichero 35258 -- macros y constantes
#define LIMITE_35258 35358
#define FACTOR_35258 4

int aplicar_limite35258(int valor) {
    if (valor > LIMITE_35258) return LIMITE_35258;
    return valor * FACTOR_35258;
}
