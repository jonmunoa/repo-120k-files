// fichero 21130 -- macros y constantes -- MODIFICADO
#define LIMITE_21130 21330
#define FACTOR_21130 2

int aplicar_limite21130(int valor) {
    if (valor > LIMITE_21130) return LIMITE_21130;
    return valor * FACTOR_21130;
}
