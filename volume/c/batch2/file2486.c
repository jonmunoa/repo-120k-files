// fichero 2486 -- macros y constantes
#define LIMITE_2486 2586
#define FACTOR_2486 2

int aplicar_limite2486(int valor) {
    if (valor > LIMITE_2486) return LIMITE_2486;
    return valor * FACTOR_2486;
}
