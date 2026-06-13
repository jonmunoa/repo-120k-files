// fichero 18814 -- macros y constantes
#define LIMITE_18814 18914
#define FACTOR_18814 5

int aplicar_limite18814(int valor) {
    if (valor > LIMITE_18814) return LIMITE_18814;
    return valor * FACTOR_18814;
}
