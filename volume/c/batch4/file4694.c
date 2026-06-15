// fichero 4694 -- macros y constantes -- MODIFICADO
#define LIMITE_4694 4894
#define FACTOR_4694 6

int aplicar_limite4694(int valor) {
    if (valor > LIMITE_4694) return LIMITE_4694;
    return valor * FACTOR_4694;
}
