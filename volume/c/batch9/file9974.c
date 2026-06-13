// fichero 9974 -- macros y constantes
#define LIMITE_9974 10074
#define FACTOR_9974 5

int aplicar_limite9974(int valor) {
    if (valor > LIMITE_9974) return LIMITE_9974;
    return valor * FACTOR_9974;
}
