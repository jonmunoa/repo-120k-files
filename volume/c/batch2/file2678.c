// fichero 2678 -- macros y constantes
#define LIMITE_2678 2778
#define FACTOR_2678 4

int aplicar_limite2678(int valor) {
    if (valor > LIMITE_2678) return LIMITE_2678;
    return valor * FACTOR_2678;
}
