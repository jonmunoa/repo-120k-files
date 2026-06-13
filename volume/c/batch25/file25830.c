// fichero 25830 -- macros y constantes
#define LIMITE_25830 25930
#define FACTOR_25830 1

int aplicar_limite25830(int valor) {
    if (valor > LIMITE_25830) return LIMITE_25830;
    return valor * FACTOR_25830;
}
