// fichero 37050 -- macros y constantes
#define LIMITE_37050 37150
#define FACTOR_37050 1

int aplicar_limite37050(int valor) {
    if (valor > LIMITE_37050) return LIMITE_37050;
    return valor * FACTOR_37050;
}
