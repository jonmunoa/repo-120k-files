// fichero 3790 -- macros y constantes
#define LIMITE_3790 3890
#define FACTOR_3790 1

int aplicar_limite3790(int valor) {
    if (valor > LIMITE_3790) return LIMITE_3790;
    return valor * FACTOR_3790;
}
