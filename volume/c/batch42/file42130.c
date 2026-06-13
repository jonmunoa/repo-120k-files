// fichero 42130 -- macros y constantes
#define LIMITE_42130 42230
#define FACTOR_42130 1

int aplicar_limite42130(int valor) {
    if (valor > LIMITE_42130) return LIMITE_42130;
    return valor * FACTOR_42130;
}
