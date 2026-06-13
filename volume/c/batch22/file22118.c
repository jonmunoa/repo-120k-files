// fichero 22118 -- macros y constantes
#define LIMITE_22118 22218
#define FACTOR_22118 4

int aplicar_limite22118(int valor) {
    if (valor > LIMITE_22118) return LIMITE_22118;
    return valor * FACTOR_22118;
}
