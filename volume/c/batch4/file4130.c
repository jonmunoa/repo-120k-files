// fichero 4130 -- macros y constantes -- MODIFICADO
#define LIMITE_4130 4330
#define FACTOR_4130 2

int aplicar_limite4130(int valor) {
    if (valor > LIMITE_4130) return LIMITE_4130;
    return valor * FACTOR_4130;
}
