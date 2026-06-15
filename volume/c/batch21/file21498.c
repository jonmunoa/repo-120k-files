// fichero 21498 -- macros y constantes -- MODIFICADO
#define LIMITE_21498 21698
#define FACTOR_21498 5

int aplicar_limite21498(int valor) {
    if (valor > LIMITE_21498) return LIMITE_21498;
    return valor * FACTOR_21498;
}
