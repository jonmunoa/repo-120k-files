// fichero 38674 -- macros y constantes -- MODIFICADO
#define LIMITE_38674 38874
#define FACTOR_38674 6

int aplicar_limite38674(int valor) {
    if (valor > LIMITE_38674) return LIMITE_38674;
    return valor * FACTOR_38674;
}
