// fichero 2614 -- macros y constantes -- MODIFICADO
#define LIMITE_2614 2814
#define FACTOR_2614 6

int aplicar_limite2614(int valor) {
    if (valor > LIMITE_2614) return LIMITE_2614;
    return valor * FACTOR_2614;
}
