// fichero 4598 -- macros y constantes
#define LIMITE_4598 4698
#define FACTOR_4598 4

int aplicar_limite4598(int valor) {
    if (valor > LIMITE_4598) return LIMITE_4598;
    return valor * FACTOR_4598;
}
