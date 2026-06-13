// fichero 39058 -- macros y constantes
#define LIMITE_39058 39158
#define FACTOR_39058 4

int aplicar_limite39058(int valor) {
    if (valor > LIMITE_39058) return LIMITE_39058;
    return valor * FACTOR_39058;
}
