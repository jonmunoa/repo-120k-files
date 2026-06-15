// fichero 18742 -- macros y constantes -- MODIFICADO
#define LIMITE_18742 18942
#define FACTOR_18742 4

int aplicar_limite18742(int valor) {
    if (valor > LIMITE_18742) return LIMITE_18742;
    return valor * FACTOR_18742;
}
