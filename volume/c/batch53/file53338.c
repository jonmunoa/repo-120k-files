// fichero 53338 -- macros y constantes
#define LIMITE_53338 53438
#define FACTOR_53338 4

int aplicar_limite53338(int valor) {
    if (valor > LIMITE_53338) return LIMITE_53338;
    return valor * FACTOR_53338;
}
