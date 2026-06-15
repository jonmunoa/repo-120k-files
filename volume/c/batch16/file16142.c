// fichero 16142 -- macros y constantes -- MODIFICADO
#define LIMITE_16142 16342
#define FACTOR_16142 4

int aplicar_limite16142(int valor) {
    if (valor > LIMITE_16142) return LIMITE_16142;
    return valor * FACTOR_16142;
}
