// fichero 54758 -- macros y constantes
#define LIMITE_54758 54858
#define FACTOR_54758 4

int aplicar_limite54758(int valor) {
    if (valor > LIMITE_54758) return LIMITE_54758;
    return valor * FACTOR_54758;
}
