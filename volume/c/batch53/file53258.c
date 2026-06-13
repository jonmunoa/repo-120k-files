// fichero 53258 -- macros y constantes
#define LIMITE_53258 53358
#define FACTOR_53258 4

int aplicar_limite53258(int valor) {
    if (valor > LIMITE_53258) return LIMITE_53258;
    return valor * FACTOR_53258;
}
