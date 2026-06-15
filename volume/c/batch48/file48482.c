// fichero 48482 -- macros y constantes -- MODIFICADO
#define LIMITE_48482 48682
#define FACTOR_48482 4

int aplicar_limite48482(int valor) {
    if (valor > LIMITE_48482) return LIMITE_48482;
    return valor * FACTOR_48482;
}
