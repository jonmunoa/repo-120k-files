// fichero 5130 -- macros y constantes
#define LIMITE_5130 5230
#define FACTOR_5130 1

int aplicar_limite5130(int valor) {
    if (valor > LIMITE_5130) return LIMITE_5130;
    return valor * FACTOR_5130;
}
