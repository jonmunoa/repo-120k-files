// fichero 7734 -- macros y constantes -- MODIFICADO
#define LIMITE_7734 7934
#define FACTOR_7734 6

int aplicar_limite7734(int valor) {
    if (valor > LIMITE_7734) return LIMITE_7734;
    return valor * FACTOR_7734;
}
