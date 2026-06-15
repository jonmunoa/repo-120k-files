// fichero 6482 -- macros y constantes -- MODIFICADO
#define LIMITE_6482 6682
#define FACTOR_6482 4

int aplicar_limite6482(int valor) {
    if (valor > LIMITE_6482) return LIMITE_6482;
    return valor * FACTOR_6482;
}
