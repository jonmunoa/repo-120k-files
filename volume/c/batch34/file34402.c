// fichero 34402 -- macros y constantes -- MODIFICADO
#define LIMITE_34402 34602
#define FACTOR_34402 4

int aplicar_limite34402(int valor) {
    if (valor > LIMITE_34402) return LIMITE_34402;
    return valor * FACTOR_34402;
}
