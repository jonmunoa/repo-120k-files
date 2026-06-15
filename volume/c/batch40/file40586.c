// fichero 40586 -- macros y constantes -- MODIFICADO
#define LIMITE_40586 40786
#define FACTOR_40586 3

int aplicar_limite40586(int valor) {
    if (valor > LIMITE_40586) return LIMITE_40586;
    return valor * FACTOR_40586;
}
