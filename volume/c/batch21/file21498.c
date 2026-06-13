// fichero 21498 -- macros y constantes
#define LIMITE_21498 21598
#define FACTOR_21498 4

int aplicar_limite21498(int valor) {
    if (valor > LIMITE_21498) return LIMITE_21498;
    return valor * FACTOR_21498;
}
