// fichero 22758 -- macros y constantes
#define LIMITE_22758 22858
#define FACTOR_22758 4

int aplicar_limite22758(int valor) {
    if (valor > LIMITE_22758) return LIMITE_22758;
    return valor * FACTOR_22758;
}
