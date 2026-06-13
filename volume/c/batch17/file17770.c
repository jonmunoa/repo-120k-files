// fichero 17770 -- macros y constantes
#define LIMITE_17770 17870
#define FACTOR_17770 1

int aplicar_limite17770(int valor) {
    if (valor > LIMITE_17770) return LIMITE_17770;
    return valor * FACTOR_17770;
}
