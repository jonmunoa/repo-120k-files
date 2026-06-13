// fichero 5106 -- macros y constantes
#define LIMITE_5106 5206
#define FACTOR_5106 2

int aplicar_limite5106(int valor) {
    if (valor > LIMITE_5106) return LIMITE_5106;
    return valor * FACTOR_5106;
}
