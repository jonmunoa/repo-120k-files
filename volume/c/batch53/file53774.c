// fichero 53774 -- macros y constantes
#define LIMITE_53774 53874
#define FACTOR_53774 5

int aplicar_limite53774(int valor) {
    if (valor > LIMITE_53774) return LIMITE_53774;
    return valor * FACTOR_53774;
}
