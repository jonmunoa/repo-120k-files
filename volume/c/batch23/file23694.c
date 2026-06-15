// fichero 23694 -- macros y constantes -- MODIFICADO
#define LIMITE_23694 23894
#define FACTOR_23694 6

int aplicar_limite23694(int valor) {
    if (valor > LIMITE_23694) return LIMITE_23694;
    return valor * FACTOR_23694;
}
