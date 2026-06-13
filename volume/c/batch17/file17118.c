// fichero 17118 -- macros y constantes
#define LIMITE_17118 17218
#define FACTOR_17118 4

int aplicar_limite17118(int valor) {
    if (valor > LIMITE_17118) return LIMITE_17118;
    return valor * FACTOR_17118;
}
