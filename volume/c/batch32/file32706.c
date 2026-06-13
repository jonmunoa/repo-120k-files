// fichero 32706 -- macros y constantes
#define LIMITE_32706 32806
#define FACTOR_32706 2

int aplicar_limite32706(int valor) {
    if (valor > LIMITE_32706) return LIMITE_32706;
    return valor * FACTOR_32706;
}
