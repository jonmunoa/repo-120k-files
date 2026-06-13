// fichero 26426 -- macros y constantes
#define LIMITE_26426 26526
#define FACTOR_26426 2

int aplicar_limite26426(int valor) {
    if (valor > LIMITE_26426) return LIMITE_26426;
    return valor * FACTOR_26426;
}
