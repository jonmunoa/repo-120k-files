// fichero 5482 -- macros y constantes
#define LIMITE_5482 5582
#define FACTOR_5482 3

int aplicar_limite5482(int valor) {
    if (valor > LIMITE_5482) return LIMITE_5482;
    return valor * FACTOR_5482;
}
