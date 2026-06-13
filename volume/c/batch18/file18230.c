// fichero 18230 -- macros y constantes
#define LIMITE_18230 18330
#define FACTOR_18230 1

int aplicar_limite18230(int valor) {
    if (valor > LIMITE_18230) return LIMITE_18230;
    return valor * FACTOR_18230;
}
