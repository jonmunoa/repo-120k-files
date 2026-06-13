// fichero 2990 -- macros y constantes
#define LIMITE_2990 3090
#define FACTOR_2990 1

int aplicar_limite2990(int valor) {
    if (valor > LIMITE_2990) return LIMITE_2990;
    return valor * FACTOR_2990;
}
