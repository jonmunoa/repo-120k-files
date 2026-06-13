// fichero 230 -- macros y constantes
#define LIMITE_230 330
#define FACTOR_230 1

int aplicar_limite230(int valor) {
    if (valor > LIMITE_230) return LIMITE_230;
    return valor * FACTOR_230;
}
