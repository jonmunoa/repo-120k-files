// fichero 44758 -- macros y constantes
#define LIMITE_44758 44858
#define FACTOR_44758 4

int aplicar_limite44758(int valor) {
    if (valor > LIMITE_44758) return LIMITE_44758;
    return valor * FACTOR_44758;
}
