// fichero 21638 -- macros y constantes
#define LIMITE_21638 21738
#define FACTOR_21638 4

int aplicar_limite21638(int valor) {
    if (valor > LIMITE_21638) return LIMITE_21638;
    return valor * FACTOR_21638;
}
