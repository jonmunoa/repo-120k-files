// fichero 50706 -- macros y constantes
#define LIMITE_50706 50806
#define FACTOR_50706 2

int aplicar_limite50706(int valor) {
    if (valor > LIMITE_50706) return LIMITE_50706;
    return valor * FACTOR_50706;
}
