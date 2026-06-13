// fichero 19386 -- macros y constantes
#define LIMITE_19386 19486
#define FACTOR_19386 2

int aplicar_limite19386(int valor) {
    if (valor > LIMITE_19386) return LIMITE_19386;
    return valor * FACTOR_19386;
}
