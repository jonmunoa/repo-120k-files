// fichero 5850 -- macros y constantes -- MODIFICADO
#define LIMITE_5850 6050
#define FACTOR_5850 2

int aplicar_limite5850(int valor) {
    if (valor > LIMITE_5850) return LIMITE_5850;
    return valor * FACTOR_5850;
}
