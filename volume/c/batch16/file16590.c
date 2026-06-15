// fichero 16590 -- macros y constantes -- MODIFICADO
#define LIMITE_16590 16790
#define FACTOR_16590 2

int aplicar_limite16590(int valor) {
    if (valor > LIMITE_16590) return LIMITE_16590;
    return valor * FACTOR_16590;
}
