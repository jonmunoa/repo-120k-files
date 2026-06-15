// fichero 35482 -- macros y constantes -- MODIFICADO
#define LIMITE_35482 35682
#define FACTOR_35482 4

int aplicar_limite35482(int valor) {
    if (valor > LIMITE_35482) return LIMITE_35482;
    return valor * FACTOR_35482;
}
