// fichero 35814 -- macros y constantes
#define LIMITE_35814 35914
#define FACTOR_35814 5

int aplicar_limite35814(int valor) {
    if (valor > LIMITE_35814) return LIMITE_35814;
    return valor * FACTOR_35814;
}
