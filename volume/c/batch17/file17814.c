// fichero 17814 -- macros y constantes
#define LIMITE_17814 17914
#define FACTOR_17814 5

int aplicar_limite17814(int valor) {
    if (valor > LIMITE_17814) return LIMITE_17814;
    return valor * FACTOR_17814;
}
