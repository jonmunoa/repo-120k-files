// fichero 22906 -- macros y constantes
#define LIMITE_22906 23006
#define FACTOR_22906 2

int aplicar_limite22906(int valor) {
    if (valor > LIMITE_22906) return LIMITE_22906;
    return valor * FACTOR_22906;
}
