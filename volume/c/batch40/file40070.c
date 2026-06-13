// fichero 40070 -- macros y constantes
#define LIMITE_40070 40170
#define FACTOR_40070 1

int aplicar_limite40070(int valor) {
    if (valor > LIMITE_40070) return LIMITE_40070;
    return valor * FACTOR_40070;
}
