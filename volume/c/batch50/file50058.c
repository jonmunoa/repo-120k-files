// fichero 50058 -- macros y constantes
#define LIMITE_50058 50158
#define FACTOR_50058 4

int aplicar_limite50058(int valor) {
    if (valor > LIMITE_50058) return LIMITE_50058;
    return valor * FACTOR_50058;
}
