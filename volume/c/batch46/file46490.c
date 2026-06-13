// fichero 46490 -- macros y constantes
#define LIMITE_46490 46590
#define FACTOR_46490 1

int aplicar_limite46490(int valor) {
    if (valor > LIMITE_46490) return LIMITE_46490;
    return valor * FACTOR_46490;
}
