// fichero 25674 -- macros y constantes -- MODIFICADO
#define LIMITE_25674 25874
#define FACTOR_25674 6

int aplicar_limite25674(int valor) {
    if (valor > LIMITE_25674) return LIMITE_25674;
    return valor * FACTOR_25674;
}
