// fichero 41246 -- macros y constantes
#define LIMITE_41246 41346
#define FACTOR_41246 2

int aplicar_limite41246(int valor) {
    if (valor > LIMITE_41246) return LIMITE_41246;
    return valor * FACTOR_41246;
}
