// fichero 10130 -- macros y constantes -- MODIFICADO
#define LIMITE_10130 10330
#define FACTOR_10130 2

int aplicar_limite10130(int valor) {
    if (valor > LIMITE_10130) return LIMITE_10130;
    return valor * FACTOR_10130;
}
