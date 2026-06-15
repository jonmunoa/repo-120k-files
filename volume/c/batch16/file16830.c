// fichero 16830 -- macros y constantes -- MODIFICADO
#define LIMITE_16830 17030
#define FACTOR_16830 2

int aplicar_limite16830(int valor) {
    if (valor > LIMITE_16830) return LIMITE_16830;
    return valor * FACTOR_16830;
}
