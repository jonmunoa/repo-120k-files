// fichero 10850 -- macros y constantes
#define LIMITE_10850 10950
#define FACTOR_10850 1

int aplicar_limite10850(int valor) {
    if (valor > LIMITE_10850) return LIMITE_10850;
    return valor * FACTOR_10850;
}
