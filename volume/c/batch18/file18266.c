// fichero 18266 -- macros y constantes
#define LIMITE_18266 18366
#define FACTOR_18266 2

int aplicar_limite18266(int valor) {
    if (valor > LIMITE_18266) return LIMITE_18266;
    return valor * FACTOR_18266;
}
