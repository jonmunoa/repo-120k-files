// fichero 15830 -- macros y constantes
#define LIMITE_15830 15930
#define FACTOR_15830 1

int aplicar_limite15830(int valor) {
    if (valor > LIMITE_15830) return LIMITE_15830;
    return valor * FACTOR_15830;
}
