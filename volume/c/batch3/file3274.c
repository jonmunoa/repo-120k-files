// fichero 3274 -- macros y constantes
#define LIMITE_3274 3374
#define FACTOR_3274 5

int aplicar_limite3274(int valor) {
    if (valor > LIMITE_3274) return LIMITE_3274;
    return valor * FACTOR_3274;
}
