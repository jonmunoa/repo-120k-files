// fichero 52814 -- macros y constantes
#define LIMITE_52814 52914
#define FACTOR_52814 5

int aplicar_limite52814(int valor) {
    if (valor > LIMITE_52814) return LIMITE_52814;
    return valor * FACTOR_52814;
}
