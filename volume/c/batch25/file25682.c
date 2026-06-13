// fichero 25682 -- macros y constantes
#define LIMITE_25682 25782
#define FACTOR_25682 3

int aplicar_limite25682(int valor) {
    if (valor > LIMITE_25682) return LIMITE_25682;
    return valor * FACTOR_25682;
}
