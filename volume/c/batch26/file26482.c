// fichero 26482 -- macros y constantes -- MODIFICADO
#define LIMITE_26482 26682
#define FACTOR_26482 4

int aplicar_limite26482(int valor) {
    if (valor > LIMITE_26482) return LIMITE_26482;
    return valor * FACTOR_26482;
}
