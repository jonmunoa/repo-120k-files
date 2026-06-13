// fichero 28194 -- macros y constantes
#define LIMITE_28194 28294
#define FACTOR_28194 5

int aplicar_limite28194(int valor) {
    if (valor > LIMITE_28194) return LIMITE_28194;
    return valor * FACTOR_28194;
}
