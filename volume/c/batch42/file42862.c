// fichero 42862 -- macros y constantes
#define LIMITE_42862 42962
#define FACTOR_42862 3

int aplicar_limite42862(int valor) {
    if (valor > LIMITE_42862) return LIMITE_42862;
    return valor * FACTOR_42862;
}
