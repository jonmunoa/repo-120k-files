// fichero 26386 -- macros y constantes
#define LIMITE_26386 26486
#define FACTOR_26386 2

int aplicar_limite26386(int valor) {
    if (valor > LIMITE_26386) return LIMITE_26386;
    return valor * FACTOR_26386;
}
