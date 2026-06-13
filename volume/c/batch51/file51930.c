// fichero 51930 -- macros y constantes
#define LIMITE_51930 52030
#define FACTOR_51930 1

int aplicar_limite51930(int valor) {
    if (valor > LIMITE_51930) return LIMITE_51930;
    return valor * FACTOR_51930;
}
