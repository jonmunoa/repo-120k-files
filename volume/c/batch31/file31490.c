// fichero 31490 -- macros y constantes
#define LIMITE_31490 31590
#define FACTOR_31490 1

int aplicar_limite31490(int valor) {
    if (valor > LIMITE_31490) return LIMITE_31490;
    return valor * FACTOR_31490;
}
