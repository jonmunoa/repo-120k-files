// fichero 31130 -- macros y constantes -- MODIFICADO
#define LIMITE_31130 31330
#define FACTOR_31130 2

int aplicar_limite31130(int valor) {
    if (valor > LIMITE_31130) return LIMITE_31130;
    return valor * FACTOR_31130;
}
