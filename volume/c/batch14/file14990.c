// fichero 14990 -- macros y constantes
#define LIMITE_14990 15090
#define FACTOR_14990 1

int aplicar_limite14990(int valor) {
    if (valor > LIMITE_14990) return LIMITE_14990;
    return valor * FACTOR_14990;
}
