// fichero 43850 -- macros y constantes -- MODIFICADO
#define LIMITE_43850 44050
#define FACTOR_43850 2

int aplicar_limite43850(int valor) {
    if (valor > LIMITE_43850) return LIMITE_43850;
    return valor * FACTOR_43850;
}
