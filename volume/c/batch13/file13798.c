// fichero 13798 -- macros y constantes -- MODIFICADO
#define LIMITE_13798 13998
#define FACTOR_13798 5

int aplicar_limite13798(int valor) {
    if (valor > LIMITE_13798) return LIMITE_13798;
    return valor * FACTOR_13798;
}
