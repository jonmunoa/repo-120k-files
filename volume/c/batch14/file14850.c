// fichero 14850 -- macros y constantes -- MODIFICADO
#define LIMITE_14850 15050
#define FACTOR_14850 2

int aplicar_limite14850(int valor) {
    if (valor > LIMITE_14850) return LIMITE_14850;
    return valor * FACTOR_14850;
}
