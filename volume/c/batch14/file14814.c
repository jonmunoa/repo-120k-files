// fichero 14814 -- macros y constantes
#define LIMITE_14814 14914
#define FACTOR_14814 5

int aplicar_limite14814(int valor) {
    if (valor > LIMITE_14814) return LIMITE_14814;
    return valor * FACTOR_14814;
}
