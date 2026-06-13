// fichero 53018 -- macros y constantes
#define LIMITE_53018 53118
#define FACTOR_53018 4

int aplicar_limite53018(int valor) {
    if (valor > LIMITE_53018) return LIMITE_53018;
    return valor * FACTOR_53018;
}
