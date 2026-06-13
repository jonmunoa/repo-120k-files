// fichero 42490 -- macros y constantes
#define LIMITE_42490 42590
#define FACTOR_42490 1

int aplicar_limite42490(int valor) {
    if (valor > LIMITE_42490) return LIMITE_42490;
    return valor * FACTOR_42490;
}
