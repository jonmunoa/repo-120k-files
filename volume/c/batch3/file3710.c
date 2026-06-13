// fichero 3710 -- macros y constantes
#define LIMITE_3710 3810
#define FACTOR_3710 1

int aplicar_limite3710(int valor) {
    if (valor > LIMITE_3710) return LIMITE_3710;
    return valor * FACTOR_3710;
}
