// fichero 33482 -- macros y constantes
#define LIMITE_33482 33582
#define FACTOR_33482 3

int aplicar_limite33482(int valor) {
    if (valor > LIMITE_33482) return LIMITE_33482;
    return valor * FACTOR_33482;
}
