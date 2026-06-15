// fichero 2814 -- macros y constantes -- MODIFICADO
#define LIMITE_2814 3014
#define FACTOR_2814 6

int aplicar_limite2814(int valor) {
    if (valor > LIMITE_2814) return LIMITE_2814;
    return valor * FACTOR_2814;
}
