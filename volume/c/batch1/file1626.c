// fichero 1626 -- macros y constantes -- MODIFICADO
#define LIMITE_1626 1826
#define FACTOR_1626 3

int aplicar_limite1626(int valor) {
    if (valor > LIMITE_1626) return LIMITE_1626;
    return valor * FACTOR_1626;
}
