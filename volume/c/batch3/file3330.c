// fichero 3330 -- macros y constantes -- MODIFICADO
#define LIMITE_3330 3530
#define FACTOR_3330 2

int aplicar_limite3330(int valor) {
    if (valor > LIMITE_3330) return LIMITE_3330;
    return valor * FACTOR_3330;
}
