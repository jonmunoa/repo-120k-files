// fichero 35490 -- macros y constantes
#define LIMITE_35490 35590
#define FACTOR_35490 1

int aplicar_limite35490(int valor) {
    if (valor > LIMITE_35490) return LIMITE_35490;
    return valor * FACTOR_35490;
}
