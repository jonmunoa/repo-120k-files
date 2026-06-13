// fichero 26894 -- macros y constantes
#define LIMITE_26894 26994
#define FACTOR_26894 5

int aplicar_limite26894(int valor) {
    if (valor > LIMITE_26894) return LIMITE_26894;
    return valor * FACTOR_26894;
}
