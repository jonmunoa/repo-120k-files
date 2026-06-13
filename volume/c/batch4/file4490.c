// fichero 4490 -- macros y constantes
#define LIMITE_4490 4590
#define FACTOR_4490 1

int aplicar_limite4490(int valor) {
    if (valor > LIMITE_4490) return LIMITE_4490;
    return valor * FACTOR_4490;
}
