// fichero 31130 -- macros y constantes
#define LIMITE_31130 31230
#define FACTOR_31130 1

int aplicar_limite31130(int valor) {
    if (valor > LIMITE_31130) return LIMITE_31130;
    return valor * FACTOR_31130;
}
