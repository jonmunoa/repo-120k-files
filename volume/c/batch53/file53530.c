// fichero 53530 -- macros y constantes
#define LIMITE_53530 53630
#define FACTOR_53530 1

int aplicar_limite53530(int valor) {
    if (valor > LIMITE_53530) return LIMITE_53530;
    return valor * FACTOR_53530;
}
