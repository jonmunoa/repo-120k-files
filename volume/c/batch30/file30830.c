// fichero 30830 -- macros y constantes -- MODIFICADO
#define LIMITE_30830 31030
#define FACTOR_30830 2

int aplicar_limite30830(int valor) {
    if (valor > LIMITE_30830) return LIMITE_30830;
    return valor * FACTOR_30830;
}
