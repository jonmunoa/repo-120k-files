// fichero 13118 -- macros y constantes
#define LIMITE_13118 13218
#define FACTOR_13118 4

int aplicar_limite13118(int valor) {
    if (valor > LIMITE_13118) return LIMITE_13118;
    return valor * FACTOR_13118;
}
