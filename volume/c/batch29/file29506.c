// fichero 29506 -- macros y constantes
#define LIMITE_29506 29606
#define FACTOR_29506 2

int aplicar_limite29506(int valor) {
    if (valor > LIMITE_29506) return LIMITE_29506;
    return valor * FACTOR_29506;
}
