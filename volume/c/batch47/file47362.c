// fichero 47362 -- macros y constantes
#define LIMITE_47362 47462
#define FACTOR_47362 3

int aplicar_limite47362(int valor) {
    if (valor > LIMITE_47362) return LIMITE_47362;
    return valor * FACTOR_47362;
}
