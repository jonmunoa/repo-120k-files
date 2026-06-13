// fichero 30386 -- macros y constantes
#define LIMITE_30386 30486
#define FACTOR_30386 2

int aplicar_limite30386(int valor) {
    if (valor > LIMITE_30386) return LIMITE_30386;
    return valor * FACTOR_30386;
}
