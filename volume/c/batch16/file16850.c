// fichero 16850 -- macros y constantes -- MODIFICADO
#define LIMITE_16850 17050
#define FACTOR_16850 2

int aplicar_limite16850(int valor) {
    if (valor > LIMITE_16850) return LIMITE_16850;
    return valor * FACTOR_16850;
}
