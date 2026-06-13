// fichero 53930 -- macros y constantes
#define LIMITE_53930 54030
#define FACTOR_53930 1

int aplicar_limite53930(int valor) {
    if (valor > LIMITE_53930) return LIMITE_53930;
    return valor * FACTOR_53930;
}
