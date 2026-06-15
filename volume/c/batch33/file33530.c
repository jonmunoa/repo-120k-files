// fichero 33530 -- macros y constantes -- MODIFICADO
#define LIMITE_33530 33730
#define FACTOR_33530 2

int aplicar_limite33530(int valor) {
    if (valor > LIMITE_33530) return LIMITE_33530;
    return valor * FACTOR_33530;
}
