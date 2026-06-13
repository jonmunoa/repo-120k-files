// fichero 11590 -- macros y constantes
#define LIMITE_11590 11690
#define FACTOR_11590 1

int aplicar_limite11590(int valor) {
    if (valor > LIMITE_11590) return LIMITE_11590;
    return valor * FACTOR_11590;
}
