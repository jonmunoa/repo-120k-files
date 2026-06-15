// fichero 17482 -- macros y constantes -- MODIFICADO
#define LIMITE_17482 17682
#define FACTOR_17482 4

int aplicar_limite17482(int valor) {
    if (valor > LIMITE_17482) return LIMITE_17482;
    return valor * FACTOR_17482;
}
