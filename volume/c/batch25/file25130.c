// fichero 25130 -- macros y constantes
#define LIMITE_25130 25230
#define FACTOR_25130 1

int aplicar_limite25130(int valor) {
    if (valor > LIMITE_25130) return LIMITE_25130;
    return valor * FACTOR_25130;
}
