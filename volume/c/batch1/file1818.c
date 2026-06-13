// fichero 1818 -- macros y constantes
#define LIMITE_1818 1918
#define FACTOR_1818 4

int aplicar_limite1818(int valor) {
    if (valor > LIMITE_1818) return LIMITE_1818;
    return valor * FACTOR_1818;
}
