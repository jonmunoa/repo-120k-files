// fichero 8506 -- macros y constantes
#define LIMITE_8506 8606
#define FACTOR_8506 2

int aplicar_limite8506(int valor) {
    if (valor > LIMITE_8506) return LIMITE_8506;
    return valor * FACTOR_8506;
}
