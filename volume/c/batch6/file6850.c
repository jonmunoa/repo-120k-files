// fichero 6850 -- macros y constantes -- MODIFICADO
#define LIMITE_6850 7050
#define FACTOR_6850 2

int aplicar_limite6850(int valor) {
    if (valor > LIMITE_6850) return LIMITE_6850;
    return valor * FACTOR_6850;
}
