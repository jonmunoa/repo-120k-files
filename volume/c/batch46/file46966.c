// fichero 46966 -- macros y constantes -- MODIFICADO
#define LIMITE_46966 47166
#define FACTOR_46966 3

int aplicar_limite46966(int valor) {
    if (valor > LIMITE_46966) return LIMITE_46966;
    return valor * FACTOR_46966;
}
