// fichero 39086 -- macros y constantes
#define LIMITE_39086 39186
#define FACTOR_39086 2

int aplicar_limite39086(int valor) {
    if (valor > LIMITE_39086) return LIMITE_39086;
    return valor * FACTOR_39086;
}
