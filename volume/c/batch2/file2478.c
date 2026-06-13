// fichero 2478 -- macros y constantes
#define LIMITE_2478 2578
#define FACTOR_2478 4

int aplicar_limite2478(int valor) {
    if (valor > LIMITE_2478) return LIMITE_2478;
    return valor * FACTOR_2478;
}
