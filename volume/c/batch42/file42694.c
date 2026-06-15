// fichero 42694 -- macros y constantes -- MODIFICADO
#define LIMITE_42694 42894
#define FACTOR_42694 6

int aplicar_limite42694(int valor) {
    if (valor > LIMITE_42694) return LIMITE_42694;
    return valor * FACTOR_42694;
}
