// fichero 16034 -- macros y constantes -- MODIFICADO
#define LIMITE_16034 16234
#define FACTOR_16034 6

int aplicar_limite16034(int valor) {
    if (valor > LIMITE_16034) return LIMITE_16034;
    return valor * FACTOR_16034;
}
