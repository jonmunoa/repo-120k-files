// fichero 27738 -- macros y constantes
#define LIMITE_27738 27838
#define FACTOR_27738 4

int aplicar_limite27738(int valor) {
    if (valor > LIMITE_27738) return LIMITE_27738;
    return valor * FACTOR_27738;
}
