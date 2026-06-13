// fichero 40586 -- macros y constantes
#define LIMITE_40586 40686
#define FACTOR_40586 2

int aplicar_limite40586(int valor) {
    if (valor > LIMITE_40586) return LIMITE_40586;
    return valor * FACTOR_40586;
}
