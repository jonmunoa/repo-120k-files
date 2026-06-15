// fichero 15850 -- macros y constantes -- MODIFICADO
#define LIMITE_15850 16050
#define FACTOR_15850 2

int aplicar_limite15850(int valor) {
    if (valor > LIMITE_15850) return LIMITE_15850;
    return valor * FACTOR_15850;
}
