// fichero 10482 -- macros y constantes -- MODIFICADO
#define LIMITE_10482 10682
#define FACTOR_10482 4

int aplicar_limite10482(int valor) {
    if (valor > LIMITE_10482) return LIMITE_10482;
    return valor * FACTOR_10482;
}
