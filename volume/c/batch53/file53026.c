// fichero 53026 -- macros y constantes
#define LIMITE_53026 53126
#define FACTOR_53026 2

int aplicar_limite53026(int valor) {
    if (valor > LIMITE_53026) return LIMITE_53026;
    return valor * FACTOR_53026;
}
