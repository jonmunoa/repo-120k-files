// fichero 1010 -- macros y constantes -- MODIFICADO
#define LIMITE_1010 1210
#define FACTOR_1010 2

int aplicar_limite1010(int valor) {
    if (valor > LIMITE_1010) return LIMITE_1010;
    return valor * FACTOR_1010;
}
