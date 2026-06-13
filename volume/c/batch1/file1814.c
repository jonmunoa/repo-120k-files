// fichero 1814 -- macros y constantes
#define LIMITE_1814 1914
#define FACTOR_1814 5

int aplicar_limite1814(int valor) {
    if (valor > LIMITE_1814) return LIMITE_1814;
    return valor * FACTOR_1814;
}
