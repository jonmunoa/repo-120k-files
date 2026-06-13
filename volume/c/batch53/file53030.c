// fichero 53030 -- macros y constantes
#define LIMITE_53030 53130
#define FACTOR_53030 1

int aplicar_limite53030(int valor) {
    if (valor > LIMITE_53030) return LIMITE_53030;
    return valor * FACTOR_53030;
}
