// fichero 37582 -- macros y constantes
#define LIMITE_37582 37682
#define FACTOR_37582 3

int aplicar_limite37582(int valor) {
    if (valor > LIMITE_37582) return LIMITE_37582;
    return valor * FACTOR_37582;
}
