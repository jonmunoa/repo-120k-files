// fichero 850 -- macros y constantes -- MODIFICADO
#define LIMITE_850 1050
#define FACTOR_850 2

int aplicar_limite850(int valor) {
    if (valor > LIMITE_850) return LIMITE_850;
    return valor * FACTOR_850;
}
