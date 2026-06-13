// fichero 5386 -- macros y constantes
#define LIMITE_5386 5486
#define FACTOR_5386 2

int aplicar_limite5386(int valor) {
    if (valor > LIMITE_5386) return LIMITE_5386;
    return valor * FACTOR_5386;
}
