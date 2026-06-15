// fichero 1482 -- macros y constantes -- MODIFICADO
#define LIMITE_1482 1682
#define FACTOR_1482 4

int aplicar_limite1482(int valor) {
    if (valor > LIMITE_1482) return LIMITE_1482;
    return valor * FACTOR_1482;
}
