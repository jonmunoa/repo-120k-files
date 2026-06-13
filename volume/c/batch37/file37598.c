// fichero 37598 -- macros y constantes
#define LIMITE_37598 37698
#define FACTOR_37598 4

int aplicar_limite37598(int valor) {
    if (valor > LIMITE_37598) return LIMITE_37598;
    return valor * FACTOR_37598;
}
