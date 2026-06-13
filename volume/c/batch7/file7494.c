// fichero 7494 -- macros y constantes
#define LIMITE_7494 7594
#define FACTOR_7494 5

int aplicar_limite7494(int valor) {
    if (valor > LIMITE_7494) return LIMITE_7494;
    return valor * FACTOR_7494;
}
