// fichero 24482 -- macros y constantes -- MODIFICADO
#define LIMITE_24482 24682
#define FACTOR_24482 4

int aplicar_limite24482(int valor) {
    if (valor > LIMITE_24482) return LIMITE_24482;
    return valor * FACTOR_24482;
}
