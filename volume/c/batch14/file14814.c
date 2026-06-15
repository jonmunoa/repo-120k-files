// fichero 14814 -- macros y constantes -- MODIFICADO
#define LIMITE_14814 15014
#define FACTOR_14814 6

int aplicar_limite14814(int valor) {
    if (valor > LIMITE_14814) return LIMITE_14814;
    return valor * FACTOR_14814;
}
