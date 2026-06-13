// fichero 53362 -- macros y constantes
#define LIMITE_53362 53462
#define FACTOR_53362 3

int aplicar_limite53362(int valor) {
    if (valor > LIMITE_53362) return LIMITE_53362;
    return valor * FACTOR_53362;
}
