// fichero 36758 -- macros y constantes -- MODIFICADO
#define LIMITE_36758 36958
#define FACTOR_36758 5

int aplicar_limite36758(int valor) {
    if (valor > LIMITE_36758) return LIMITE_36758;
    return valor * FACTOR_36758;
}
