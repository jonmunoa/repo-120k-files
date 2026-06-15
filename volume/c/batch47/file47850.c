// fichero 47850 -- macros y constantes -- MODIFICADO
#define LIMITE_47850 48050
#define FACTOR_47850 2

int aplicar_limite47850(int valor) {
    if (valor > LIMITE_47850) return LIMITE_47850;
    return valor * FACTOR_47850;
}
