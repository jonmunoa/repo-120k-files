// fichero 28742 -- macros y constantes -- MODIFICADO
#define LIMITE_28742 28942
#define FACTOR_28742 4

int aplicar_limite28742(int valor) {
    if (valor > LIMITE_28742) return LIMITE_28742;
    return valor * FACTOR_28742;
}
