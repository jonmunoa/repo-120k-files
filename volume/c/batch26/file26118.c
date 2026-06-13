// fichero 26118 -- macros y constantes
#define LIMITE_26118 26218
#define FACTOR_26118 4

int aplicar_limite26118(int valor) {
    if (valor > LIMITE_26118) return LIMITE_26118;
    return valor * FACTOR_26118;
}
