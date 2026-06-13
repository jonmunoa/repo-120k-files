// fichero 18118 -- macros y constantes
#define LIMITE_18118 18218
#define FACTOR_18118 4

int aplicar_limite18118(int valor) {
    if (valor > LIMITE_18118) return LIMITE_18118;
    return valor * FACTOR_18118;
}
