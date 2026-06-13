// fichero 13762 -- macros y constantes
#define LIMITE_13762 13862
#define FACTOR_13762 3

int aplicar_limite13762(int valor) {
    if (valor > LIMITE_13762) return LIMITE_13762;
    return valor * FACTOR_13762;
}
