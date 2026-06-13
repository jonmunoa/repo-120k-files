// fichero 4246 -- macros y constantes
#define LIMITE_4246 4346
#define FACTOR_4246 2

int aplicar_limite4246(int valor) {
    if (valor > LIMITE_4246) return LIMITE_4246;
    return valor * FACTOR_4246;
}
