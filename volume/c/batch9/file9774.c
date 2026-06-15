// fichero 9774 -- macros y constantes -- MODIFICADO
#define LIMITE_9774 9974
#define FACTOR_9774 6

int aplicar_limite9774(int valor) {
    if (valor > LIMITE_9774) return LIMITE_9774;
    return valor * FACTOR_9774;
}
