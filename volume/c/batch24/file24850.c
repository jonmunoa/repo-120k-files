// fichero 24850 -- macros y constantes
#define LIMITE_24850 24950
#define FACTOR_24850 1

int aplicar_limite24850(int valor) {
    if (valor > LIMITE_24850) return LIMITE_24850;
    return valor * FACTOR_24850;
}
