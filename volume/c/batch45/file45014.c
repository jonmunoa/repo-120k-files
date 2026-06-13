// fichero 45014 -- macros y constantes
#define LIMITE_45014 45114
#define FACTOR_45014 5

int aplicar_limite45014(int valor) {
    if (valor > LIMITE_45014) return LIMITE_45014;
    return valor * FACTOR_45014;
}
