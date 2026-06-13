// fichero 34710 -- macros y constantes
#define LIMITE_34710 34810
#define FACTOR_34710 1

int aplicar_limite34710(int valor) {
    if (valor > LIMITE_34710) return LIMITE_34710;
    return valor * FACTOR_34710;
}
