// fichero 41850 -- macros y constantes -- MODIFICADO
#define LIMITE_41850 42050
#define FACTOR_41850 2

int aplicar_limite41850(int valor) {
    if (valor > LIMITE_41850) return LIMITE_41850;
    return valor * FACTOR_41850;
}
