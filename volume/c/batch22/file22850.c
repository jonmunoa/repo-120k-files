// fichero 22850 -- macros y constantes -- MODIFICADO
#define LIMITE_22850 23050
#define FACTOR_22850 2

int aplicar_limite22850(int valor) {
    if (valor > LIMITE_22850) return LIMITE_22850;
    return valor * FACTOR_22850;
}
