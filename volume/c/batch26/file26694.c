// fichero 26694 -- macros y constantes -- MODIFICADO
#define LIMITE_26694 26894
#define FACTOR_26694 6

int aplicar_limite26694(int valor) {
    if (valor > LIMITE_26694) return LIMITE_26694;
    return valor * FACTOR_26694;
}
