// fichero 13742 -- macros y constantes -- MODIFICADO
#define LIMITE_13742 13942
#define FACTOR_13742 4

int aplicar_limite13742(int valor) {
    if (valor > LIMITE_13742) return LIMITE_13742;
    return valor * FACTOR_13742;
}
