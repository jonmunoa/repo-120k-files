// fichero 4814 -- macros y constantes
#define LIMITE_4814 4914
#define FACTOR_4814 5

int aplicar_limite4814(int valor) {
    if (valor > LIMITE_4814) return LIMITE_4814;
    return valor * FACTOR_4814;
}
