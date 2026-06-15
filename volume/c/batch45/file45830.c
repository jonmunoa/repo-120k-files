// fichero 45830 -- macros y constantes -- MODIFICADO
#define LIMITE_45830 46030
#define FACTOR_45830 2

int aplicar_limite45830(int valor) {
    if (valor > LIMITE_45830) return LIMITE_45830;
    return valor * FACTOR_45830;
}
