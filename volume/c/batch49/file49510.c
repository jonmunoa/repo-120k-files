// fichero 49510 -- macros y constantes
#define LIMITE_49510 49610
#define FACTOR_49510 1

int aplicar_limite49510(int valor) {
    if (valor > LIMITE_49510) return LIMITE_49510;
    return valor * FACTOR_49510;
}
