// fichero 21678 -- macros y constantes
#define LIMITE_21678 21778
#define FACTOR_21678 4

int aplicar_limite21678(int valor) {
    if (valor > LIMITE_21678) return LIMITE_21678;
    return valor * FACTOR_21678;
}
