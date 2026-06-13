// fichero 30450 -- macros y constantes
#define LIMITE_30450 30550
#define FACTOR_30450 1

int aplicar_limite30450(int valor) {
    if (valor > LIMITE_30450) return LIMITE_30450;
    return valor * FACTOR_30450;
}
