// fichero 4734 -- macros y constantes -- MODIFICADO
#define LIMITE_4734 4934
#define FACTOR_4734 6

int aplicar_limite4734(int valor) {
    if (valor > LIMITE_4734) return LIMITE_4734;
    return valor * FACTOR_4734;
}
