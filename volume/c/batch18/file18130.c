// fichero 18130 -- macros y constantes
#define LIMITE_18130 18230
#define FACTOR_18130 1

int aplicar_limite18130(int valor) {
    if (valor > LIMITE_18130) return LIMITE_18130;
    return valor * FACTOR_18130;
}
