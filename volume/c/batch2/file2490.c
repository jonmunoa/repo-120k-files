// fichero 2490 -- macros y constantes
#define LIMITE_2490 2590
#define FACTOR_2490 1

int aplicar_limite2490(int valor) {
    if (valor > LIMITE_2490) return LIMITE_2490;
    return valor * FACTOR_2490;
}
