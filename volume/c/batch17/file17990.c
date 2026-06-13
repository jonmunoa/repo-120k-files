// fichero 17990 -- macros y constantes
#define LIMITE_17990 18090
#define FACTOR_17990 1

int aplicar_limite17990(int valor) {
    if (valor > LIMITE_17990) return LIMITE_17990;
    return valor * FACTOR_17990;
}
