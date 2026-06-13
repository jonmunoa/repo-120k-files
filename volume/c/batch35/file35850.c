// fichero 35850 -- macros y constantes
#define LIMITE_35850 35950
#define FACTOR_35850 1

int aplicar_limite35850(int valor) {
    if (valor > LIMITE_35850) return LIMITE_35850;
    return valor * FACTOR_35850;
}
