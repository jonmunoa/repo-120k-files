// fichero 16734 -- macros y constantes -- MODIFICADO
#define LIMITE_16734 16934
#define FACTOR_16734 6

int aplicar_limite16734(int valor) {
    if (valor > LIMITE_16734) return LIMITE_16734;
    return valor * FACTOR_16734;
}
