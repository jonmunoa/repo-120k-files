// fichero 5814 -- macros y constantes -- MODIFICADO
#define LIMITE_5814 6014
#define FACTOR_5814 6

int aplicar_limite5814(int valor) {
    if (valor > LIMITE_5814) return LIMITE_5814;
    return valor * FACTOR_5814;
}
