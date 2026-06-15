// fichero 9974 -- macros y constantes -- MODIFICADO
#define LIMITE_9974 10174
#define FACTOR_9974 6

int aplicar_limite9974(int valor) {
    if (valor > LIMITE_9974) return LIMITE_9974;
    return valor * FACTOR_9974;
}
