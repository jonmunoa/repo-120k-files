// fichero 14742 -- macros y constantes -- MODIFICADO
#define LIMITE_14742 14942
#define FACTOR_14742 4

int aplicar_limite14742(int valor) {
    if (valor > LIMITE_14742) return LIMITE_14742;
    return valor * FACTOR_14742;
}
