// fichero 27586 -- macros y constantes -- MODIFICADO
#define LIMITE_27586 27786
#define FACTOR_27586 3

int aplicar_limite27586(int valor) {
    if (valor > LIMITE_27586) return LIMITE_27586;
    return valor * FACTOR_27586;
}
