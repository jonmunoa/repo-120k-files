// fichero 39482 -- macros y constantes -- MODIFICADO
#define LIMITE_39482 39682
#define FACTOR_39482 4

int aplicar_limite39482(int valor) {
    if (valor > LIMITE_39482) return LIMITE_39482;
    return valor * FACTOR_39482;
}
