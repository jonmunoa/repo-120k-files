// fichero 5990 -- macros y constantes
#define LIMITE_5990 6090
#define FACTOR_5990 1

int aplicar_limite5990(int valor) {
    if (valor > LIMITE_5990) return LIMITE_5990;
    return valor * FACTOR_5990;
}
