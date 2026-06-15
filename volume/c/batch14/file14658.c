// fichero 14658 -- macros y constantes -- MODIFICADO
#define LIMITE_14658 14858
#define FACTOR_14658 5

int aplicar_limite14658(int valor) {
    if (valor > LIMITE_14658) return LIMITE_14658;
    return valor * FACTOR_14658;
}
