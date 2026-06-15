// fichero 45734 -- macros y constantes -- MODIFICADO
#define LIMITE_45734 45934
#define FACTOR_45734 6

int aplicar_limite45734(int valor) {
    if (valor > LIMITE_45734) return LIMITE_45734;
    return valor * FACTOR_45734;
}
