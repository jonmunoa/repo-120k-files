// fichero 8534 -- macros y constantes
#define LIMITE_8534 8634
#define FACTOR_8534 5

int aplicar_limite8534(int valor) {
    if (valor > LIMITE_8534) return LIMITE_8534;
    return valor * FACTOR_8534;
}
