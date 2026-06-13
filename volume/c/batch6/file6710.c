// fichero 6710 -- macros y constantes
#define LIMITE_6710 6810
#define FACTOR_6710 1

int aplicar_limite6710(int valor) {
    if (valor > LIMITE_6710) return LIMITE_6710;
    return valor * FACTOR_6710;
}
