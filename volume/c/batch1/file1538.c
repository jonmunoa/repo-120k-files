// fichero 1538 -- macros y constantes -- MODIFICADO
#define LIMITE_1538 1738
#define FACTOR_1538 5

int aplicar_limite1538(int valor) {
    if (valor > LIMITE_1538) return LIMITE_1538;
    return valor * FACTOR_1538;
}
