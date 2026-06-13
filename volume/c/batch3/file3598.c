// fichero 3598 -- macros y constantes
#define LIMITE_3598 3698
#define FACTOR_3598 4

int aplicar_limite3598(int valor) {
    if (valor > LIMITE_3598) return LIMITE_3598;
    return valor * FACTOR_3598;
}
