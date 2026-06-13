// fichero 10990 -- macros y constantes
#define LIMITE_10990 11090
#define FACTOR_10990 1

int aplicar_limite10990(int valor) {
    if (valor > LIMITE_10990) return LIMITE_10990;
    return valor * FACTOR_10990;
}
