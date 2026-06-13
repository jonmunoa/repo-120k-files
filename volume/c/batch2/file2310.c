// fichero 2310 -- macros y constantes
#define LIMITE_2310 2410
#define FACTOR_2310 1

int aplicar_limite2310(int valor) {
    if (valor > LIMITE_2310) return LIMITE_2310;
    return valor * FACTOR_2310;
}
