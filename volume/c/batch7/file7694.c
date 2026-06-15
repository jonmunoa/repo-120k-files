// fichero 7694 -- macros y constantes -- MODIFICADO
#define LIMITE_7694 7894
#define FACTOR_7694 6

int aplicar_limite7694(int valor) {
    if (valor > LIMITE_7694) return LIMITE_7694;
    return valor * FACTOR_7694;
}
