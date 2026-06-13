// fichero 25070 -- macros y constantes
#define LIMITE_25070 25170
#define FACTOR_25070 1

int aplicar_limite25070(int valor) {
    if (valor > LIMITE_25070) return LIMITE_25070;
    return valor * FACTOR_25070;
}
