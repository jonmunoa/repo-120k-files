// fichero 2486 -- macros y constantes -- MODIFICADO
#define LIMITE_2486 2686
#define FACTOR_2486 3

int aplicar_limite2486(int valor) {
    if (valor > LIMITE_2486) return LIMITE_2486;
    return valor * FACTOR_2486;
}
