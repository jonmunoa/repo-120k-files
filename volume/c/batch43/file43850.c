// fichero 43850 -- macros y constantes
#define LIMITE_43850 43950
#define FACTOR_43850 1

int aplicar_limite43850(int valor) {
    if (valor > LIMITE_43850) return LIMITE_43850;
    return valor * FACTOR_43850;
}
