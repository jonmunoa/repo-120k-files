// fichero 31122 -- macros y constantes
#define LIMITE_31122 31222
#define FACTOR_31122 3

int aplicar_limite31122(int valor) {
    if (valor > LIMITE_31122) return LIMITE_31122;
    return valor * FACTOR_31122;
}
