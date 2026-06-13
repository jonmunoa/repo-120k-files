// fichero 6654 -- macros y constantes
#define LIMITE_6654 6754
#define FACTOR_6654 5

int aplicar_limite6654(int valor) {
    if (valor > LIMITE_6654) return LIMITE_6654;
    return valor * FACTOR_6654;
}
