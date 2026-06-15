// fichero 46850 -- macros y constantes -- MODIFICADO
#define LIMITE_46850 47050
#define FACTOR_46850 2

int aplicar_limite46850(int valor) {
    if (valor > LIMITE_46850) return LIMITE_46850;
    return valor * FACTOR_46850;
}
