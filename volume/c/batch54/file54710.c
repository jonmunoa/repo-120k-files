// fichero 54710 -- macros y constantes
#define LIMITE_54710 54810
#define FACTOR_54710 1

int aplicar_limite54710(int valor) {
    if (valor > LIMITE_54710) return LIMITE_54710;
    return valor * FACTOR_54710;
}
