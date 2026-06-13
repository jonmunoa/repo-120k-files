// fichero 37294 -- macros y constantes
#define LIMITE_37294 37394
#define FACTOR_37294 5

int aplicar_limite37294(int valor) {
    if (valor > LIMITE_37294) return LIMITE_37294;
    return valor * FACTOR_37294;
}
