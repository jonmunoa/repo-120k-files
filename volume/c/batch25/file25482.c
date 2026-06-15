// fichero 25482 -- macros y constantes -- MODIFICADO
#define LIMITE_25482 25682
#define FACTOR_25482 4

int aplicar_limite25482(int valor) {
    if (valor > LIMITE_25482) return LIMITE_25482;
    return valor * FACTOR_25482;
}
