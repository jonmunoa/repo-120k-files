// fichero 17954 -- macros y constantes
#define LIMITE_17954 18054
#define FACTOR_17954 5

int aplicar_limite17954(int valor) {
    if (valor > LIMITE_17954) return LIMITE_17954;
    return valor * FACTOR_17954;
}
