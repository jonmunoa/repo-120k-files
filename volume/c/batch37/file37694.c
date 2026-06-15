// fichero 37694 -- macros y constantes -- MODIFICADO
#define LIMITE_37694 37894
#define FACTOR_37694 6

int aplicar_limite37694(int valor) {
    if (valor > LIMITE_37694) return LIMITE_37694;
    return valor * FACTOR_37694;
}
