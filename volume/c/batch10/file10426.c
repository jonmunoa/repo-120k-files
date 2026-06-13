// fichero 10426 -- macros y constantes
#define LIMITE_10426 10526
#define FACTOR_10426 2

int aplicar_limite10426(int valor) {
    if (valor > LIMITE_10426) return LIMITE_10426;
    return valor * FACTOR_10426;
}
