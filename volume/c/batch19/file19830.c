// fichero 19830 -- macros y constantes
#define LIMITE_19830 19930
#define FACTOR_19830 1

int aplicar_limite19830(int valor) {
    if (valor > LIMITE_19830) return LIMITE_19830;
    return valor * FACTOR_19830;
}
