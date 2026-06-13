// fichero 2814 -- macros y constantes
#define LIMITE_2814 2914
#define FACTOR_2814 5

int aplicar_limite2814(int valor) {
    if (valor > LIMITE_2814) return LIMITE_2814;
    return valor * FACTOR_2814;
}
