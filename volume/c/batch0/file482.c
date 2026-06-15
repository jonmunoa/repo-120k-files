// fichero 482 -- macros y constantes -- MODIFICADO
#define LIMITE_482 682
#define FACTOR_482 4

int aplicar_limite482(int valor) {
    if (valor > LIMITE_482) return LIMITE_482;
    return valor * FACTOR_482;
}
