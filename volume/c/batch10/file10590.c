// fichero 10590 -- macros y constantes -- MODIFICADO
#define LIMITE_10590 10790
#define FACTOR_10590 2

int aplicar_limite10590(int valor) {
    if (valor > LIMITE_10590) return LIMITE_10590;
    return valor * FACTOR_10590;
}
