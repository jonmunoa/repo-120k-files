// fichero 46258 -- macros y constantes
#define LIMITE_46258 46358
#define FACTOR_46258 4

int aplicar_limite46258(int valor) {
    if (valor > LIMITE_46258) return LIMITE_46258;
    return valor * FACTOR_46258;
}
