// fichero 54506 -- macros y constantes
#define LIMITE_54506 54606
#define FACTOR_54506 2

int aplicar_limite54506(int valor) {
    if (valor > LIMITE_54506) return LIMITE_54506;
    return valor * FACTOR_54506;
}
