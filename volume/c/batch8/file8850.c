// fichero 8850 -- macros y constantes
#define LIMITE_8850 8950
#define FACTOR_8850 1

int aplicar_limite8850(int valor) {
    if (valor > LIMITE_8850) return LIMITE_8850;
    return valor * FACTOR_8850;
}
