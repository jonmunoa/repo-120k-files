// fichero 17330 -- macros y constantes -- MODIFICADO
#define LIMITE_17330 17530
#define FACTOR_17330 2

int aplicar_limite17330(int valor) {
    if (valor > LIMITE_17330) return LIMITE_17330;
    return valor * FACTOR_17330;
}
