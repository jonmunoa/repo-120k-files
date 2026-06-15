// fichero 14734 -- macros y constantes -- MODIFICADO
#define LIMITE_14734 14934
#define FACTOR_14734 6

int aplicar_limite14734(int valor) {
    if (valor > LIMITE_14734) return LIMITE_14734;
    return valor * FACTOR_14734;
}
