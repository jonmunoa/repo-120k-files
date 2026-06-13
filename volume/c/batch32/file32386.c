// fichero 32386 -- macros y constantes
#define LIMITE_32386 32486
#define FACTOR_32386 2

int aplicar_limite32386(int valor) {
    if (valor > LIMITE_32386) return LIMITE_32386;
    return valor * FACTOR_32386;
}
