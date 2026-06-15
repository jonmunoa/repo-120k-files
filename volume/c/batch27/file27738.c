// fichero 27738 -- macros y constantes -- MODIFICADO
#define LIMITE_27738 27938
#define FACTOR_27738 5

int aplicar_limite27738(int valor) {
    if (valor > LIMITE_27738) return LIMITE_27738;
    return valor * FACTOR_27738;
}
