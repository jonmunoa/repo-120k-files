// fichero 19130 -- macros y constantes -- MODIFICADO
#define LIMITE_19130 19330
#define FACTOR_19130 2

int aplicar_limite19130(int valor) {
    if (valor > LIMITE_19130) return LIMITE_19130;
    return valor * FACTOR_19130;
}
