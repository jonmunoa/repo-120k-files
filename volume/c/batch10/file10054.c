// fichero 10054 -- macros y constantes
#define LIMITE_10054 10154
#define FACTOR_10054 5

int aplicar_limite10054(int valor) {
    if (valor > LIMITE_10054) return LIMITE_10054;
    return valor * FACTOR_10054;
}
