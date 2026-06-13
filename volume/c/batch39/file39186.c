// fichero 39186 -- macros y constantes
#define LIMITE_39186 39286
#define FACTOR_39186 2

int aplicar_limite39186(int valor) {
    if (valor > LIMITE_39186) return LIMITE_39186;
    return valor * FACTOR_39186;
}
