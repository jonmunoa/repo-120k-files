// fichero 11850 -- macros y constantes
#define LIMITE_11850 11950
#define FACTOR_11850 1

int aplicar_limite11850(int valor) {
    if (valor > LIMITE_11850) return LIMITE_11850;
    return valor * FACTOR_11850;
}
