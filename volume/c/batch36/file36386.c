// fichero 36386 -- macros y constantes
#define LIMITE_36386 36486
#define FACTOR_36386 2

int aplicar_limite36386(int valor) {
    if (valor > LIMITE_36386) return LIMITE_36386;
    return valor * FACTOR_36386;
}
