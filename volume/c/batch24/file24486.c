// fichero 24486 -- macros y constantes
#define LIMITE_24486 24586
#define FACTOR_24486 2

int aplicar_limite24486(int valor) {
    if (valor > LIMITE_24486) return LIMITE_24486;
    return valor * FACTOR_24486;
}
