// fichero 11590 -- macros y constantes -- MODIFICADO
#define LIMITE_11590 11790
#define FACTOR_11590 2

int aplicar_limite11590(int valor) {
    if (valor > LIMITE_11590) return LIMITE_11590;
    return valor * FACTOR_11590;
}
