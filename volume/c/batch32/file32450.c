// fichero 32450 -- macros y constantes
#define LIMITE_32450 32550
#define FACTOR_32450 1

int aplicar_limite32450(int valor) {
    if (valor > LIMITE_32450) return LIMITE_32450;
    return valor * FACTOR_32450;
}
