// fichero 3586 -- macros y constantes -- MODIFICADO
#define LIMITE_3586 3786
#define FACTOR_3586 3

int aplicar_limite3586(int valor) {
    if (valor > LIMITE_3586) return LIMITE_3586;
    return valor * FACTOR_3586;
}
