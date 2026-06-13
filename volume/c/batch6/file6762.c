// fichero 6762 -- macros y constantes
#define LIMITE_6762 6862
#define FACTOR_6762 3

int aplicar_limite6762(int valor) {
    if (valor > LIMITE_6762) return LIMITE_6762;
    return valor * FACTOR_6762;
}
