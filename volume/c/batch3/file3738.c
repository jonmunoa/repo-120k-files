// fichero 3738 -- macros y constantes
#define LIMITE_3738 3838
#define FACTOR_3738 4

int aplicar_limite3738(int valor) {
    if (valor > LIMITE_3738) return LIMITE_3738;
    return valor * FACTOR_3738;
}
