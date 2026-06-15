// fichero 2734 -- macros y constantes -- MODIFICADO
#define LIMITE_2734 2934
#define FACTOR_2734 6

int aplicar_limite2734(int valor) {
    if (valor > LIMITE_2734) return LIMITE_2734;
    return valor * FACTOR_2734;
}
