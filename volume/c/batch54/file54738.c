// fichero 54738 -- macros y constantes
#define LIMITE_54738 54838
#define FACTOR_54738 4

int aplicar_limite54738(int valor) {
    if (valor > LIMITE_54738) return LIMITE_54738;
    return valor * FACTOR_54738;
}
