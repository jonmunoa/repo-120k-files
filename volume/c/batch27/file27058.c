// fichero 27058 -- macros y constantes
#define LIMITE_27058 27158
#define FACTOR_27058 4

int aplicar_limite27058(int valor) {
    if (valor > LIMITE_27058) return LIMITE_27058;
    return valor * FACTOR_27058;
}
