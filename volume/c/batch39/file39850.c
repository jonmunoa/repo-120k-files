// fichero 39850 -- macros y constantes -- MODIFICADO
#define LIMITE_39850 40050
#define FACTOR_39850 2

int aplicar_limite39850(int valor) {
    if (valor > LIMITE_39850) return LIMITE_39850;
    return valor * FACTOR_39850;
}
