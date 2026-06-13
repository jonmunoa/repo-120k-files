// fichero 53674 -- macros y constantes
#define LIMITE_53674 53774
#define FACTOR_53674 5

int aplicar_limite53674(int valor) {
    if (valor > LIMITE_53674) return LIMITE_53674;
    return valor * FACTOR_53674;
}
