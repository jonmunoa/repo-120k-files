// fichero 25850 -- macros y constantes
#define LIMITE_25850 25950
#define FACTOR_25850 1

int aplicar_limite25850(int valor) {
    if (valor > LIMITE_25850) return LIMITE_25850;
    return valor * FACTOR_25850;
}
