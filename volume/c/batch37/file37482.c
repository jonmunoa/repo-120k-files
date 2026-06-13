// fichero 37482 -- macros y constantes
#define LIMITE_37482 37582
#define FACTOR_37482 3

int aplicar_limite37482(int valor) {
    if (valor > LIMITE_37482) return LIMITE_37482;
    return valor * FACTOR_37482;
}
