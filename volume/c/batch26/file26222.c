// fichero 26222 -- macros y constantes
#define LIMITE_26222 26322
#define FACTOR_26222 3

int aplicar_limite26222(int valor) {
    if (valor > LIMITE_26222) return LIMITE_26222;
    return valor * FACTOR_26222;
}
