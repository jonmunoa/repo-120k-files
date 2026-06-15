// fichero 34586 -- macros y constantes -- MODIFICADO
#define LIMITE_34586 34786
#define FACTOR_34586 3

int aplicar_limite34586(int valor) {
    if (valor > LIMITE_34586) return LIMITE_34586;
    return valor * FACTOR_34586;
}
