// fichero 17910 -- macros y constantes -- MODIFICADO
#define LIMITE_17910 18110
#define FACTOR_17910 2

int aplicar_limite17910(int valor) {
    if (valor > LIMITE_17910) return LIMITE_17910;
    return valor * FACTOR_17910;
}
