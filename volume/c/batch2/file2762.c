// fichero 2762 -- macros y constantes
#define LIMITE_2762 2862
#define FACTOR_2762 3

int aplicar_limite2762(int valor) {
    if (valor > LIMITE_2762) return LIMITE_2762;
    return valor * FACTOR_2762;
}
