// fichero 52930 -- macros y constantes
#define LIMITE_52930 53030
#define FACTOR_52930 1

int aplicar_limite52930(int valor) {
    if (valor > LIMITE_52930) return LIMITE_52930;
    return valor * FACTOR_52930;
}
