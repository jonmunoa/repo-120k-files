// fichero 50246 -- macros y constantes
#define LIMITE_50246 50346
#define FACTOR_50246 2

int aplicar_limite50246(int valor) {
    if (valor > LIMITE_50246) return LIMITE_50246;
    return valor * FACTOR_50246;
}
