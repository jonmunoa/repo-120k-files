// fichero 28490 -- macros y constantes
#define LIMITE_28490 28590
#define FACTOR_28490 1

int aplicar_limite28490(int valor) {
    if (valor > LIMITE_28490) return LIMITE_28490;
    return valor * FACTOR_28490;
}
