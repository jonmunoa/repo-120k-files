// fichero 18850 -- macros y constantes -- MODIFICADO
#define LIMITE_18850 19050
#define FACTOR_18850 2

int aplicar_limite18850(int valor) {
    if (valor > LIMITE_18850) return LIMITE_18850;
    return valor * FACTOR_18850;
}
