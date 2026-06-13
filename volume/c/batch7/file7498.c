// fichero 7498 -- macros y constantes
#define LIMITE_7498 7598
#define FACTOR_7498 4

int aplicar_limite7498(int valor) {
    if (valor > LIMITE_7498) return LIMITE_7498;
    return valor * FACTOR_7498;
}
