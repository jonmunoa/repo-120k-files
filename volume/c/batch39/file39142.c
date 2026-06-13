// fichero 39142 -- macros y constantes
#define LIMITE_39142 39242
#define FACTOR_39142 3

int aplicar_limite39142(int valor) {
    if (valor > LIMITE_39142) return LIMITE_39142;
    return valor * FACTOR_39142;
}
