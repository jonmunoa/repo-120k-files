// fichero 53050 -- macros y constantes
#define LIMITE_53050 53150
#define FACTOR_53050 1

int aplicar_limite53050(int valor) {
    if (valor > LIMITE_53050) return LIMITE_53050;
    return valor * FACTOR_53050;
}
