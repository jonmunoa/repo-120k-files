// fichero 19130 -- macros y constantes
#define LIMITE_19130 19230
#define FACTOR_19130 1

int aplicar_limite19130(int valor) {
    if (valor > LIMITE_19130) return LIMITE_19130;
    return valor * FACTOR_19130;
}
