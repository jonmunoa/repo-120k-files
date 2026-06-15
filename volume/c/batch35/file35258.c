// fichero 35258 -- macros y constantes -- MODIFICADO
#define LIMITE_35258 35458
#define FACTOR_35258 5

int aplicar_limite35258(int valor) {
    if (valor > LIMITE_35258) return LIMITE_35258;
    return valor * FACTOR_35258;
}
