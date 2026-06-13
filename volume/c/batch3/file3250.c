// fichero 3250 -- macros y constantes
#define LIMITE_3250 3350
#define FACTOR_3250 1

int aplicar_limite3250(int valor) {
    if (valor > LIMITE_3250) return LIMITE_3250;
    return valor * FACTOR_3250;
}
