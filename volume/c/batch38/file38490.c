// fichero 38490 -- macros y constantes
#define LIMITE_38490 38590
#define FACTOR_38490 1

int aplicar_limite38490(int valor) {
    if (valor > LIMITE_38490) return LIMITE_38490;
    return valor * FACTOR_38490;
}
