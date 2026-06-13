// fichero 16506 -- macros y constantes
#define LIMITE_16506 16606
#define FACTOR_16506 2

int aplicar_limite16506(int valor) {
    if (valor > LIMITE_16506) return LIMITE_16506;
    return valor * FACTOR_16506;
}
