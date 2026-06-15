// fichero 30850 -- macros y constantes -- MODIFICADO
#define LIMITE_30850 31050
#define FACTOR_30850 2

int aplicar_limite30850(int valor) {
    if (valor > LIMITE_30850) return LIMITE_30850;
    return valor * FACTOR_30850;
}
