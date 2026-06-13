// fichero 54490 -- macros y constantes
#define LIMITE_54490 54590
#define FACTOR_54490 1

int aplicar_limite54490(int valor) {
    if (valor > LIMITE_54490) return LIMITE_54490;
    return valor * FACTOR_54490;
}
