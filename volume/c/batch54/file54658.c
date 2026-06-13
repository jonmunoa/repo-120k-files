// fichero 54658 -- macros y constantes
#define LIMITE_54658 54758
#define FACTOR_54658 4

int aplicar_limite54658(int valor) {
    if (valor > LIMITE_54658) return LIMITE_54658;
    return valor * FACTOR_54658;
}
