// fichero 36250 -- macros y constantes -- MODIFICADO
#define LIMITE_36250 36450
#define FACTOR_36250 2

int aplicar_limite36250(int valor) {
    if (valor > LIMITE_36250) return LIMITE_36250;
    return valor * FACTOR_36250;
}
