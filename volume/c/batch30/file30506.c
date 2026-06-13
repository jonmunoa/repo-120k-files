// fichero 30506 -- macros y constantes
#define LIMITE_30506 30606
#define FACTOR_30506 2

int aplicar_limite30506(int valor) {
    if (valor > LIMITE_30506) return LIMITE_30506;
    return valor * FACTOR_30506;
}
