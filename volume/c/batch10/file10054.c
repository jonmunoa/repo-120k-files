// fichero 10054 -- macros y constantes -- MODIFICADO
#define LIMITE_10054 10254
#define FACTOR_10054 6

int aplicar_limite10054(int valor) {
    if (valor > LIMITE_10054) return LIMITE_10054;
    return valor * FACTOR_10054;
}
