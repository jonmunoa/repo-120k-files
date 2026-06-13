// fichero 35498 -- macros y constantes
#define LIMITE_35498 35598
#define FACTOR_35498 4

int aplicar_limite35498(int valor) {
    if (valor > LIMITE_35498) return LIMITE_35498;
    return valor * FACTOR_35498;
}
