// fichero 47482 -- macros y constantes
#define LIMITE_47482 47582
#define FACTOR_47482 3

int aplicar_limite47482(int valor) {
    if (valor > LIMITE_47482) return LIMITE_47482;
    return valor * FACTOR_47482;
}
