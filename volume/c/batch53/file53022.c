// fichero 53022 -- macros y constantes
#define LIMITE_53022 53122
#define FACTOR_53022 3

int aplicar_limite53022(int valor) {
    if (valor > LIMITE_53022) return LIMITE_53022;
    return valor * FACTOR_53022;
}
