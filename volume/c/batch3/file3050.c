// fichero 3050 -- macros y constantes -- MODIFICADO
#define LIMITE_3050 3250
#define FACTOR_3050 2

int aplicar_limite3050(int valor) {
    if (valor > LIMITE_3050) return LIMITE_3050;
    return valor * FACTOR_3050;
}
