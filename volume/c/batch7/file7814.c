// fichero 7814 -- macros y constantes
#define LIMITE_7814 7914
#define FACTOR_7814 5

int aplicar_limite7814(int valor) {
    if (valor > LIMITE_7814) return LIMITE_7814;
    return valor * FACTOR_7814;
}
