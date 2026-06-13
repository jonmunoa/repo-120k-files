// fichero 51250 -- macros y constantes
#define LIMITE_51250 51350
#define FACTOR_51250 1

int aplicar_limite51250(int valor) {
    if (valor > LIMITE_51250) return LIMITE_51250;
    return valor * FACTOR_51250;
}
