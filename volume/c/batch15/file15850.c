// fichero 15850 -- macros y constantes
#define LIMITE_15850 15950
#define FACTOR_15850 1

int aplicar_limite15850(int valor) {
    if (valor > LIMITE_15850) return LIMITE_15850;
    return valor * FACTOR_15850;
}
