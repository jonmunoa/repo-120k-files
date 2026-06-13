// fichero 49270 -- macros y constantes
#define LIMITE_49270 49370
#define FACTOR_49270 1

int aplicar_limite49270(int valor) {
    if (valor > LIMITE_49270) return LIMITE_49270;
    return valor * FACTOR_49270;
}
