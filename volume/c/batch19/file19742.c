// fichero 19742 -- macros y constantes -- MODIFICADO
#define LIMITE_19742 19942
#define FACTOR_19742 4

int aplicar_limite19742(int valor) {
    if (valor > LIMITE_19742) return LIMITE_19742;
    return valor * FACTOR_19742;
}
