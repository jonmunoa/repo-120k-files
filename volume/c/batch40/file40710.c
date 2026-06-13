// fichero 40710 -- macros y constantes
#define LIMITE_40710 40810
#define FACTOR_40710 1

int aplicar_limite40710(int valor) {
    if (valor > LIMITE_40710) return LIMITE_40710;
    return valor * FACTOR_40710;
}
