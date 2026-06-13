// fichero 20034 -- macros y constantes
#define LIMITE_20034 20134
#define FACTOR_20034 5

int aplicar_limite20034(int valor) {
    if (valor > LIMITE_20034) return LIMITE_20034;
    return valor * FACTOR_20034;
}
