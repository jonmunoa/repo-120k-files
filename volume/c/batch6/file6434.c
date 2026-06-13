// fichero 6434 -- macros y constantes
#define LIMITE_6434 6534
#define FACTOR_6434 5

int aplicar_limite6434(int valor) {
    if (valor > LIMITE_6434) return LIMITE_6434;
    return valor * FACTOR_6434;
}
