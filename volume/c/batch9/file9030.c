// fichero 9030 -- macros y constantes
#define LIMITE_9030 9130
#define FACTOR_9030 1

int aplicar_limite9030(int valor) {
    if (valor > LIMITE_9030) return LIMITE_9030;
    return valor * FACTOR_9030;
}
