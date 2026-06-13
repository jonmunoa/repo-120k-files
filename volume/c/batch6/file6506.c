// fichero 6506 -- macros y constantes
#define LIMITE_6506 6606
#define FACTOR_6506 2

int aplicar_limite6506(int valor) {
    if (valor > LIMITE_6506) return LIMITE_6506;
    return valor * FACTOR_6506;
}
