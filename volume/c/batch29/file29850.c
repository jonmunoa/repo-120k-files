// fichero 29850 -- macros y constantes -- MODIFICADO
#define LIMITE_29850 30050
#define FACTOR_29850 2

int aplicar_limite29850(int valor) {
    if (valor > LIMITE_29850) return LIMITE_29850;
    return valor * FACTOR_29850;
}
