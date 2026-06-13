// fichero 54130 -- macros y constantes
#define LIMITE_54130 54230
#define FACTOR_54130 1

int aplicar_limite54130(int valor) {
    if (valor > LIMITE_54130) return LIMITE_54130;
    return valor * FACTOR_54130;
}
