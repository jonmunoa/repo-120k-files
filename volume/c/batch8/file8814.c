// fichero 8814 -- macros y constantes
#define LIMITE_8814 8914
#define FACTOR_8814 5

int aplicar_limite8814(int valor) {
    if (valor > LIMITE_8814) return LIMITE_8814;
    return valor * FACTOR_8814;
}
