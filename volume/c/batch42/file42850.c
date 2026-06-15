// fichero 42850 -- macros y constantes -- MODIFICADO
#define LIMITE_42850 43050
#define FACTOR_42850 2

int aplicar_limite42850(int valor) {
    if (valor > LIMITE_42850) return LIMITE_42850;
    return valor * FACTOR_42850;
}
