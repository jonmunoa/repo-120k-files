// fichero 24058 -- macros y constantes
#define LIMITE_24058 24158
#define FACTOR_24058 4

int aplicar_limite24058(int valor) {
    if (valor > LIMITE_24058) return LIMITE_24058;
    return valor * FACTOR_24058;
}
