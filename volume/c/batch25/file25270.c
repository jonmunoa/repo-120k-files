// fichero 25270 -- macros y constantes
#define LIMITE_25270 25370
#define FACTOR_25270 1

int aplicar_limite25270(int valor) {
    if (valor > LIMITE_25270) return LIMITE_25270;
    return valor * FACTOR_25270;
}
