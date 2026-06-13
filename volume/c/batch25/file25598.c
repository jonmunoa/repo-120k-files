// fichero 25598 -- macros y constantes
#define LIMITE_25598 25698
#define FACTOR_25598 4

int aplicar_limite25598(int valor) {
    if (valor > LIMITE_25598) return LIMITE_25598;
    return valor * FACTOR_25598;
}
