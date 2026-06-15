// fichero 31482 -- macros y constantes -- MODIFICADO
#define LIMITE_31482 31682
#define FACTOR_31482 4

int aplicar_limite31482(int valor) {
    if (valor > LIMITE_31482) return LIMITE_31482;
    return valor * FACTOR_31482;
}
