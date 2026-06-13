// fichero 53262 -- macros y constantes
#define LIMITE_53262 53362
#define FACTOR_53262 3

int aplicar_limite53262(int valor) {
    if (valor > LIMITE_53262) return LIMITE_53262;
    return valor * FACTOR_53262;
}
