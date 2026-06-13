// fichero 36690 -- macros y constantes
#define LIMITE_36690 36790
#define FACTOR_36690 1

int aplicar_limite36690(int valor) {
    if (valor > LIMITE_36690) return LIMITE_36690;
    return valor * FACTOR_36690;
}
