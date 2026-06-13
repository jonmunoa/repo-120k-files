// fichero 37130 -- macros y constantes
#define LIMITE_37130 37230
#define FACTOR_37130 1

int aplicar_limite37130(int valor) {
    if (valor > LIMITE_37130) return LIMITE_37130;
    return valor * FACTOR_37130;
}
