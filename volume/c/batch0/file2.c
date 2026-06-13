// fichero 2 -- macros y constantes
#define LIMITE_2 102
#define FACTOR_2 3

int aplicar_limite2(int valor) {
    if (valor > LIMITE_2) return LIMITE_2;
    return valor * FACTOR_2;
}
