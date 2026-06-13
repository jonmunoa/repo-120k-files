// fichero 36294 -- macros y constantes
#define LIMITE_36294 36394
#define FACTOR_36294 5

int aplicar_limite36294(int valor) {
    if (valor > LIMITE_36294) return LIMITE_36294;
    return valor * FACTOR_36294;
}
