// fichero 26294 -- macros y constantes
#define LIMITE_26294 26394
#define FACTOR_26294 5

int aplicar_limite26294(int valor) {
    if (valor > LIMITE_26294) return LIMITE_26294;
    return valor * FACTOR_26294;
}
