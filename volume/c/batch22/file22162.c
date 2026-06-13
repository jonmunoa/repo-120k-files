// fichero 22162 -- macros y constantes
#define LIMITE_22162 22262
#define FACTOR_22162 3

int aplicar_limite22162(int valor) {
    if (valor > LIMITE_22162) return LIMITE_22162;
    return valor * FACTOR_22162;
}
