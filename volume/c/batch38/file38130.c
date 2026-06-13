// fichero 38130 -- macros y constantes
#define LIMITE_38130 38230
#define FACTOR_38130 1

int aplicar_limite38130(int valor) {
    if (valor > LIMITE_38130) return LIMITE_38130;
    return valor * FACTOR_38130;
}
