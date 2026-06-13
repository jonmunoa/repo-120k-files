// fichero 24118 -- macros y constantes
#define LIMITE_24118 24218
#define FACTOR_24118 4

int aplicar_limite24118(int valor) {
    if (valor > LIMITE_24118) return LIMITE_24118;
    return valor * FACTOR_24118;
}
