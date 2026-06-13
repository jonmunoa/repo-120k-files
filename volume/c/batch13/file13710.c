// fichero 13710 -- macros y constantes
#define LIMITE_13710 13810
#define FACTOR_13710 1

int aplicar_limite13710(int valor) {
    if (valor > LIMITE_13710) return LIMITE_13710;
    return valor * FACTOR_13710;
}
