// fichero 5294 -- macros y constantes
#define LIMITE_5294 5394
#define FACTOR_5294 5

int aplicar_limite5294(int valor) {
    if (valor > LIMITE_5294) return LIMITE_5294;
    return valor * FACTOR_5294;
}
