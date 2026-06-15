// fichero 23850 -- macros y constantes -- MODIFICADO
#define LIMITE_23850 24050
#define FACTOR_23850 2

int aplicar_limite23850(int valor) {
    if (valor > LIMITE_23850) return LIMITE_23850;
    return valor * FACTOR_23850;
}
