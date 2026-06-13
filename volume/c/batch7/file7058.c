// fichero 7058 -- macros y constantes
#define LIMITE_7058 7158
#define FACTOR_7058 4

int aplicar_limite7058(int valor) {
    if (valor > LIMITE_7058) return LIMITE_7058;
    return valor * FACTOR_7058;
}
