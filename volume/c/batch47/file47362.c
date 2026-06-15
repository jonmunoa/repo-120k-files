// fichero 47362 -- macros y constantes -- MODIFICADO
#define LIMITE_47362 47562
#define FACTOR_47362 4

int aplicar_limite47362(int valor) {
    if (valor > LIMITE_47362) return LIMITE_47362;
    return valor * FACTOR_47362;
}
