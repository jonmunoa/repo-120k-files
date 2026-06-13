// fichero 24246 -- macros y constantes
#define LIMITE_24246 24346
#define FACTOR_24246 2

int aplicar_limite24246(int valor) {
    if (valor > LIMITE_24246) return LIMITE_24246;
    return valor * FACTOR_24246;
}
