// fichero 4598 -- macros y constantes -- MODIFICADO
#define LIMITE_4598 4798
#define FACTOR_4598 5

int aplicar_limite4598(int valor) {
    if (valor > LIMITE_4598) return LIMITE_4598;
    return valor * FACTOR_4598;
}
