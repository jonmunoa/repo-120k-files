// fichero 29850 -- macros y constantes
#define LIMITE_29850 29950
#define FACTOR_29850 1

int aplicar_limite29850(int valor) {
    if (valor > LIMITE_29850) return LIMITE_29850;
    return valor * FACTOR_29850;
}
