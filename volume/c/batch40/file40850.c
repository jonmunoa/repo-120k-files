// fichero 40850 -- macros y constantes -- MODIFICADO
#define LIMITE_40850 41050
#define FACTOR_40850 2

int aplicar_limite40850(int valor) {
    if (valor > LIMITE_40850) return LIMITE_40850;
    return valor * FACTOR_40850;
}
