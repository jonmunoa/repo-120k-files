// fichero 54850 -- macros y constantes
#define LIMITE_54850 54950
#define FACTOR_54850 1

int aplicar_limite54850(int valor) {
    if (valor > LIMITE_54850) return LIMITE_54850;
    return valor * FACTOR_54850;
}
