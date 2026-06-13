// fichero 8750 -- macros y constantes
#define LIMITE_8750 8850
#define FACTOR_8750 1

int aplicar_limite8750(int valor) {
    if (valor > LIMITE_8750) return LIMITE_8750;
    return valor * FACTOR_8750;
}
