// fichero 35850 -- macros y constantes -- MODIFICADO
#define LIMITE_35850 36050
#define FACTOR_35850 2

int aplicar_limite35850(int valor) {
    if (valor > LIMITE_35850) return LIMITE_35850;
    return valor * FACTOR_35850;
}
