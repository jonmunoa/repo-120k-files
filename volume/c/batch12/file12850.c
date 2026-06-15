// fichero 12850 -- macros y constantes -- MODIFICADO
#define LIMITE_12850 13050
#define FACTOR_12850 2

int aplicar_limite12850(int valor) {
    if (valor > LIMITE_12850) return LIMITE_12850;
    return valor * FACTOR_12850;
}
