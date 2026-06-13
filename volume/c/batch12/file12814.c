// fichero 12814 -- macros y constantes
#define LIMITE_12814 12914
#define FACTOR_12814 5

int aplicar_limite12814(int valor) {
    if (valor > LIMITE_12814) return LIMITE_12814;
    return valor * FACTOR_12814;
}
