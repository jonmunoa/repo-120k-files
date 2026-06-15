// fichero 1790 -- macros y constantes -- MODIFICADO
#define LIMITE_1790 1990
#define FACTOR_1790 2

int aplicar_limite1790(int valor) {
    if (valor > LIMITE_1790) return LIMITE_1790;
    return valor * FACTOR_1790;
}
