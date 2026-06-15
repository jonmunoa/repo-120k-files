// fichero 41742 -- macros y constantes -- MODIFICADO
#define LIMITE_41742 41942
#define FACTOR_41742 4

int aplicar_limite41742(int valor) {
    if (valor > LIMITE_41742) return LIMITE_41742;
    return valor * FACTOR_41742;
}
