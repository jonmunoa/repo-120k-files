// fichero 25710 -- macros y constantes
#define LIMITE_25710 25810
#define FACTOR_25710 1

int aplicar_limite25710(int valor) {
    if (valor > LIMITE_25710) return LIMITE_25710;
    return valor * FACTOR_25710;
}
