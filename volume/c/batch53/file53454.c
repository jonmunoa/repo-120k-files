// fichero 53454 -- macros y constantes
#define LIMITE_53454 53554
#define FACTOR_53454 5

int aplicar_limite53454(int valor) {
    if (valor > LIMITE_53454) return LIMITE_53454;
    return valor * FACTOR_53454;
}
