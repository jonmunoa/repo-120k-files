// fichero 47482 -- macros y constantes -- MODIFICADO
#define LIMITE_47482 47682
#define FACTOR_47482 4

int aplicar_limite47482(int valor) {
    if (valor > LIMITE_47482) return LIMITE_47482;
    return valor * FACTOR_47482;
}
