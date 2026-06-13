// fichero 2910 -- macros y constantes
#define LIMITE_2910 3010
#define FACTOR_2910 1

int aplicar_limite2910(int valor) {
    if (valor > LIMITE_2910) return LIMITE_2910;
    return valor * FACTOR_2910;
}
