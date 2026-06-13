// fichero 6990 -- macros y constantes
#define LIMITE_6990 7090
#define FACTOR_6990 1

int aplicar_limite6990(int valor) {
    if (valor > LIMITE_6990) return LIMITE_6990;
    return valor * FACTOR_6990;
}
