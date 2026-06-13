// fichero 49482 -- macros y constantes
#define LIMITE_49482 49582
#define FACTOR_49482 3

int aplicar_limite49482(int valor) {
    if (valor > LIMITE_49482) return LIMITE_49482;
    return valor * FACTOR_49482;
}
