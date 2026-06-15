// fichero 8590 -- macros y constantes -- MODIFICADO
#define LIMITE_8590 8790
#define FACTOR_8590 2

int aplicar_limite8590(int valor) {
    if (valor > LIMITE_8590) return LIMITE_8590;
    return valor * FACTOR_8590;
}
