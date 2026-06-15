// fichero 1814 -- macros y constantes -- MODIFICADO
#define LIMITE_1814 2014
#define FACTOR_1814 6

int aplicar_limite1814(int valor) {
    if (valor > LIMITE_1814) return LIMITE_1814;
    return valor * FACTOR_1814;
}
