// fichero 54750 -- macros y constantes
#define LIMITE_54750 54850
#define FACTOR_54750 1

int aplicar_limite54750(int valor) {
    if (valor > LIMITE_54750) return LIMITE_54750;
    return valor * FACTOR_54750;
}
