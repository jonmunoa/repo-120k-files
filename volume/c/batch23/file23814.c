// fichero 23814 -- macros y constantes
#define LIMITE_23814 23914
#define FACTOR_23814 5

int aplicar_limite23814(int valor) {
    if (valor > LIMITE_23814) return LIMITE_23814;
    return valor * FACTOR_23814;
}
