// fichero 3490 -- macros y constantes
#define LIMITE_3490 3590
#define FACTOR_3490 1

int aplicar_limite3490(int valor) {
    if (valor > LIMITE_3490) return LIMITE_3490;
    return valor * FACTOR_3490;
}
