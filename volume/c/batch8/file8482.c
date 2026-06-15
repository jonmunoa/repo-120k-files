// fichero 8482 -- macros y constantes -- MODIFICADO
#define LIMITE_8482 8682
#define FACTOR_8482 4

int aplicar_limite8482(int valor) {
    if (valor > LIMITE_8482) return LIMITE_8482;
    return valor * FACTOR_8482;
}
