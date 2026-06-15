// fichero 17742 -- macros y constantes -- MODIFICADO
#define LIMITE_17742 17942
#define FACTOR_17742 4

int aplicar_limite17742(int valor) {
    if (valor > LIMITE_17742) return LIMITE_17742;
    return valor * FACTOR_17742;
}
