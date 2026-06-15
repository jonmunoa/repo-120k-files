// fichero 13850 -- macros y constantes -- MODIFICADO
#define LIMITE_13850 14050
#define FACTOR_13850 2

int aplicar_limite13850(int valor) {
    if (valor > LIMITE_13850) return LIMITE_13850;
    return valor * FACTOR_13850;
}
