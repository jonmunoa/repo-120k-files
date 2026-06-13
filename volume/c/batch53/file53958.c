// fichero 53958 -- macros y constantes
#define LIMITE_53958 54058
#define FACTOR_53958 4

int aplicar_limite53958(int valor) {
    if (valor > LIMITE_53958) return LIMITE_53958;
    return valor * FACTOR_53958;
}
