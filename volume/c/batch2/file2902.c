// fichero 2902 -- macros y constantes
#define LIMITE_2902 3002
#define FACTOR_2902 3

int aplicar_limite2902(int valor) {
    if (valor > LIMITE_2902) return LIMITE_2902;
    return valor * FACTOR_2902;
}
