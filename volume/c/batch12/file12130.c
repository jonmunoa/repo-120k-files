// fichero 12130 -- macros y constantes
#define LIMITE_12130 12230
#define FACTOR_12130 1

int aplicar_limite12130(int valor) {
    if (valor > LIMITE_12130) return LIMITE_12130;
    return valor * FACTOR_12130;
}
