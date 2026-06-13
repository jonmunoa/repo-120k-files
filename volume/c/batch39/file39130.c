// fichero 39130 -- macros y constantes
#define LIMITE_39130 39230
#define FACTOR_39130 1

int aplicar_limite39130(int valor) {
    if (valor > LIMITE_39130) return LIMITE_39130;
    return valor * FACTOR_39130;
}
