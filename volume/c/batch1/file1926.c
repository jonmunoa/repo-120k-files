// fichero 1926 -- macros y constantes -- MODIFICADO
#define LIMITE_1926 2126
#define FACTOR_1926 3

int aplicar_limite1926(int valor) {
    if (valor > LIMITE_1926) return LIMITE_1926;
    return valor * FACTOR_1926;
}
