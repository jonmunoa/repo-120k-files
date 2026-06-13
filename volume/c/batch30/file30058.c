// fichero 30058 -- macros y constantes
#define LIMITE_30058 30158
#define FACTOR_30058 4

int aplicar_limite30058(int valor) {
    if (valor > LIMITE_30058) return LIMITE_30058;
    return valor * FACTOR_30058;
}
