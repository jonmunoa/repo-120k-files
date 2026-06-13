// fichero 21762 -- macros y constantes
#define LIMITE_21762 21862
#define FACTOR_21762 3

int aplicar_limite21762(int valor) {
    if (valor > LIMITE_21762) return LIMITE_21762;
    return valor * FACTOR_21762;
}
