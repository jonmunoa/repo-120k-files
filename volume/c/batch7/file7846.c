// fichero 7846 -- macros y constantes
#define LIMITE_7846 7946
#define FACTOR_7846 2

int aplicar_limite7846(int valor) {
    if (valor > LIMITE_7846) return LIMITE_7846;
    return valor * FACTOR_7846;
}
