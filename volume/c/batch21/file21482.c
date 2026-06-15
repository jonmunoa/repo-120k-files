// fichero 21482 -- macros y constantes -- MODIFICADO
#define LIMITE_21482 21682
#define FACTOR_21482 4

int aplicar_limite21482(int valor) {
    if (valor > LIMITE_21482) return LIMITE_21482;
    return valor * FACTOR_21482;
}
