// fichero 32506 -- macros y constantes
#define LIMITE_32506 32606
#define FACTOR_32506 2

int aplicar_limite32506(int valor) {
    if (valor > LIMITE_32506) return LIMITE_32506;
    return valor * FACTOR_32506;
}
