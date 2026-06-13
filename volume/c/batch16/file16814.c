// fichero 16814 -- macros y constantes
#define LIMITE_16814 16914
#define FACTOR_16814 5

int aplicar_limite16814(int valor) {
    if (valor > LIMITE_16814) return LIMITE_16814;
    return valor * FACTOR_16814;
}
