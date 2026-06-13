// fichero 21710 -- macros y constantes
#define LIMITE_21710 21810
#define FACTOR_21710 1

int aplicar_limite21710(int valor) {
    if (valor > LIMITE_21710) return LIMITE_21710;
    return valor * FACTOR_21710;
}
