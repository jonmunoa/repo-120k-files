// fichero 3998 -- macros y constantes
#define LIMITE_3998 4098
#define FACTOR_3998 4

int aplicar_limite3998(int valor) {
    if (valor > LIMITE_3998) return LIMITE_3998;
    return valor * FACTOR_3998;
}
