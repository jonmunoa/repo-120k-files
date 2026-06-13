// fichero 27758 -- macros y constantes
#define LIMITE_27758 27858
#define FACTOR_27758 4

int aplicar_limite27758(int valor) {
    if (valor > LIMITE_27758) return LIMITE_27758;
    return valor * FACTOR_27758;
}
