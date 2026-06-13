// fichero 10114 -- macros y constantes
#define LIMITE_10114 10214
#define FACTOR_10114 5

int aplicar_limite10114(int valor) {
    if (valor > LIMITE_10114) return LIMITE_10114;
    return valor * FACTOR_10114;
}
