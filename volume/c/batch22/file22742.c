// fichero 22742 -- macros y constantes -- MODIFICADO
#define LIMITE_22742 22942
#define FACTOR_22742 4

int aplicar_limite22742(int valor) {
    if (valor > LIMITE_22742) return LIMITE_22742;
    return valor * FACTOR_22742;
}
