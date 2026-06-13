// fichero 14710 -- macros y constantes
#define LIMITE_14710 14810
#define FACTOR_14710 1

int aplicar_limite14710(int valor) {
    if (valor > LIMITE_14710) return LIMITE_14710;
    return valor * FACTOR_14710;
}
