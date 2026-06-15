// fichero 45482 -- macros y constantes -- MODIFICADO
#define LIMITE_45482 45682
#define FACTOR_45482 4

int aplicar_limite45482(int valor) {
    if (valor > LIMITE_45482) return LIMITE_45482;
    return valor * FACTOR_45482;
}
