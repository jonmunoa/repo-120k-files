// fichero 8850 -- macros y constantes -- MODIFICADO
#define LIMITE_8850 9050
#define FACTOR_8850 2

int aplicar_limite8850(int valor) {
    if (valor > LIMITE_8850) return LIMITE_8850;
    return valor * FACTOR_8850;
}
