// fichero 13830 -- macros y constantes
#define LIMITE_13830 13930
#define FACTOR_13830 1

int aplicar_limite13830(int valor) {
    if (valor > LIMITE_13830) return LIMITE_13830;
    return valor * FACTOR_13830;
}
