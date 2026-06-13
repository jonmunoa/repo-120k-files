// fichero 53126 -- macros y constantes
#define LIMITE_53126 53226
#define FACTOR_53126 2

int aplicar_limite53126(int valor) {
    if (valor > LIMITE_53126) return LIMITE_53126;
    return valor * FACTOR_53126;
}
