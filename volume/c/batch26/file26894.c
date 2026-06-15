// fichero 26894 -- macros y constantes -- MODIFICADO
#define LIMITE_26894 27094
#define FACTOR_26894 6

int aplicar_limite26894(int valor) {
    if (valor > LIMITE_26894) return LIMITE_26894;
    return valor * FACTOR_26894;
}
