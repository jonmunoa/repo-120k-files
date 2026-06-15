// fichero 16442 -- macros y constantes -- MODIFICADO
#define LIMITE_16442 16642
#define FACTOR_16442 4

int aplicar_limite16442(int valor) {
    if (valor > LIMITE_16442) return LIMITE_16442;
    return valor * FACTOR_16442;
}
