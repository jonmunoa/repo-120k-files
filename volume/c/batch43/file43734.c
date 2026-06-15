// fichero 43734 -- macros y constantes -- MODIFICADO
#define LIMITE_43734 43934
#define FACTOR_43734 6

int aplicar_limite43734(int valor) {
    if (valor > LIMITE_43734) return LIMITE_43734;
    return valor * FACTOR_43734;
}
