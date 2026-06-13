// fichero 32490 -- macros y constantes
#define LIMITE_32490 32590
#define FACTOR_32490 1

int aplicar_limite32490(int valor) {
    if (valor > LIMITE_32490) return LIMITE_32490;
    return valor * FACTOR_32490;
}
