// fichero 3058 -- macros y constantes
#define LIMITE_3058 3158
#define FACTOR_3058 4

int aplicar_limite3058(int valor) {
    if (valor > LIMITE_3058) return LIMITE_3058;
    return valor * FACTOR_3058;
}
