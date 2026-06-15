// fichero 10250 -- macros y constantes -- MODIFICADO
#define LIMITE_10250 10450
#define FACTOR_10250 2

int aplicar_limite10250(int valor) {
    if (valor > LIMITE_10250) return LIMITE_10250;
    return valor * FACTOR_10250;
}
