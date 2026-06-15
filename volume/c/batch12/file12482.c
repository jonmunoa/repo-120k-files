// fichero 12482 -- macros y constantes -- MODIFICADO
#define LIMITE_12482 12682
#define FACTOR_12482 4

int aplicar_limite12482(int valor) {
    if (valor > LIMITE_12482) return LIMITE_12482;
    return valor * FACTOR_12482;
}
