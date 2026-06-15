// fichero 45694 -- macros y constantes -- MODIFICADO
#define LIMITE_45694 45894
#define FACTOR_45694 6

int aplicar_limite45694(int valor) {
    if (valor > LIMITE_45694) return LIMITE_45694;
    return valor * FACTOR_45694;
}
