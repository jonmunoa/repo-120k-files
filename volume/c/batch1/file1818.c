// fichero 1818 -- macros y constantes -- MODIFICADO
#define LIMITE_1818 2018
#define FACTOR_1818 5

int aplicar_limite1818(int valor) {
    if (valor > LIMITE_1818) return LIMITE_1818;
    return valor * FACTOR_1818;
}
