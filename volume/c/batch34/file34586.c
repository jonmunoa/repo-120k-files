// fichero 34586 -- macros y constantes
#define LIMITE_34586 34686
#define FACTOR_34586 2

int aplicar_limite34586(int valor) {
    if (valor > LIMITE_34586) return LIMITE_34586;
    return valor * FACTOR_34586;
}
