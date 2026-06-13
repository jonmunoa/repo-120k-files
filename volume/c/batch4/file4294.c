// fichero 4294 -- macros y constantes
#define LIMITE_4294 4394
#define FACTOR_4294 5

int aplicar_limite4294(int valor) {
    if (valor > LIMITE_4294) return LIMITE_4294;
    return valor * FACTOR_4294;
}
