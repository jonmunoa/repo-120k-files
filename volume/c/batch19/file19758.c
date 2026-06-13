// fichero 19758 -- macros y constantes
#define LIMITE_19758 19858
#define FACTOR_19758 4

int aplicar_limite19758(int valor) {
    if (valor > LIMITE_19758) return LIMITE_19758;
    return valor * FACTOR_19758;
}
