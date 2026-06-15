// fichero 6694 -- macros y constantes -- MODIFICADO
#define LIMITE_6694 6894
#define FACTOR_6694 6

int aplicar_limite6694(int valor) {
    if (valor > LIMITE_6694) return LIMITE_6694;
    return valor * FACTOR_6694;
}
