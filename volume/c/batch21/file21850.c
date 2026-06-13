// fichero 21850 -- macros y constantes
#define LIMITE_21850 21950
#define FACTOR_21850 1

int aplicar_limite21850(int valor) {
    if (valor > LIMITE_21850) return LIMITE_21850;
    return valor * FACTOR_21850;
}
