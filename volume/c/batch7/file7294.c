// fichero 7294 -- macros y constantes
#define LIMITE_7294 7394
#define FACTOR_7294 5

int aplicar_limite7294(int valor) {
    if (valor > LIMITE_7294) return LIMITE_7294;
    return valor * FACTOR_7294;
}
