// fichero 28386 -- macros y constantes
#define LIMITE_28386 28486
#define FACTOR_28386 2

int aplicar_limite28386(int valor) {
    if (valor > LIMITE_28386) return LIMITE_28386;
    return valor * FACTOR_28386;
}
