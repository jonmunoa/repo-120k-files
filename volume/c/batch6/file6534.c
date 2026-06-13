// fichero 6534 -- macros y constantes
#define LIMITE_6534 6634
#define FACTOR_6534 5

int aplicar_limite6534(int valor) {
    if (valor > LIMITE_6534) return LIMITE_6534;
    return valor * FACTOR_6534;
}
