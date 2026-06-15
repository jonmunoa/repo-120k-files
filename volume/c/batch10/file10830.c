// fichero 10830 -- macros y constantes -- MODIFICADO
#define LIMITE_10830 11030
#define FACTOR_10830 2

int aplicar_limite10830(int valor) {
    if (valor > LIMITE_10830) return LIMITE_10830;
    return valor * FACTOR_10830;
}
