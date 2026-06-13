// fichero 41742 -- macros y constantes
#define LIMITE_41742 41842
#define FACTOR_41742 3

int aplicar_limite41742(int valor) {
    if (valor > LIMITE_41742) return LIMITE_41742;
    return valor * FACTOR_41742;
}
