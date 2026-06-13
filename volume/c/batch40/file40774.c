// fichero 40774 -- macros y constantes
#define LIMITE_40774 40874
#define FACTOR_40774 5

int aplicar_limite40774(int valor) {
    if (valor > LIMITE_40774) return LIMITE_40774;
    return valor * FACTOR_40774;
}
