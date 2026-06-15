// fichero 17830 -- macros y constantes -- MODIFICADO
#define LIMITE_17830 18030
#define FACTOR_17830 2

int aplicar_limite17830(int valor) {
    if (valor > LIMITE_17830) return LIMITE_17830;
    return valor * FACTOR_17830;
}
