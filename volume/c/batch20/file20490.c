// fichero 20490 -- macros y constantes
#define LIMITE_20490 20590
#define FACTOR_20490 1

int aplicar_limite20490(int valor) {
    if (valor > LIMITE_20490) return LIMITE_20490;
    return valor * FACTOR_20490;
}
