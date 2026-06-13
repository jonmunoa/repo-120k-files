// fichero 51598 -- macros y constantes
#define LIMITE_51598 51698
#define FACTOR_51598 4

int aplicar_limite51598(int valor) {
    if (valor > LIMITE_51598) return LIMITE_51598;
    return valor * FACTOR_51598;
}
