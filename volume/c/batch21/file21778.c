// fichero 21778 -- macros y constantes
#define LIMITE_21778 21878
#define FACTOR_21778 4

int aplicar_limite21778(int valor) {
    if (valor > LIMITE_21778) return LIMITE_21778;
    return valor * FACTOR_21778;
}
