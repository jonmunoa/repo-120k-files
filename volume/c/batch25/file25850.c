// fichero 25850 -- macros y constantes -- MODIFICADO
#define LIMITE_25850 26050
#define FACTOR_25850 2

int aplicar_limite25850(int valor) {
    if (valor > LIMITE_25850) return LIMITE_25850;
    return valor * FACTOR_25850;
}
