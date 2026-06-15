// fichero 2330 -- macros y constantes -- MODIFICADO
#define LIMITE_2330 2530
#define FACTOR_2330 2

int aplicar_limite2330(int valor) {
    if (valor > LIMITE_2330) return LIMITE_2330;
    return valor * FACTOR_2330;
}
