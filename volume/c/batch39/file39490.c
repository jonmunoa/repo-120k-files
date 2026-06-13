// fichero 39490 -- macros y constantes
#define LIMITE_39490 39590
#define FACTOR_39490 1

int aplicar_limite39490(int valor) {
    if (valor > LIMITE_39490) return LIMITE_39490;
    return valor * FACTOR_39490;
}
