// fichero 17506 -- macros y constantes
#define LIMITE_17506 17606
#define FACTOR_17506 2

int aplicar_limite17506(int valor) {
    if (valor > LIMITE_17506) return LIMITE_17506;
    return valor * FACTOR_17506;
}
