// fichero 2694 -- macros y constantes -- MODIFICADO
#define LIMITE_2694 2894
#define FACTOR_2694 6

int aplicar_limite2694(int valor) {
    if (valor > LIMITE_2694) return LIMITE_2694;
    return valor * FACTOR_2694;
}
