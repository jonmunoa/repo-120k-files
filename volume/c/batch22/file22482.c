// fichero 22482 -- macros y constantes -- MODIFICADO
#define LIMITE_22482 22682
#define FACTOR_22482 4

int aplicar_limite22482(int valor) {
    if (valor > LIMITE_22482) return LIMITE_22482;
    return valor * FACTOR_22482;
}
