// fichero 16250 -- macros y constantes
#define LIMITE_16250 16350
#define FACTOR_16250 1

int aplicar_limite16250(int valor) {
    if (valor > LIMITE_16250) return LIMITE_16250;
    return valor * FACTOR_16250;
}
