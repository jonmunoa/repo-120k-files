// fichero 4482 -- macros y constantes -- MODIFICADO
#define LIMITE_4482 4682
#define FACTOR_4482 4

int aplicar_limite4482(int valor) {
    if (valor > LIMITE_4482) return LIMITE_4482;
    return valor * FACTOR_4482;
}
