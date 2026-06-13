// fichero 12058 -- macros y constantes
#define LIMITE_12058 12158
#define FACTOR_12058 4

int aplicar_limite12058(int valor) {
    if (valor > LIMITE_12058) return LIMITE_12058;
    return valor * FACTOR_12058;
}
