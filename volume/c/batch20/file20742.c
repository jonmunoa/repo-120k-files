// fichero 20742 -- macros y constantes -- MODIFICADO
#define LIMITE_20742 20942
#define FACTOR_20742 4

int aplicar_limite20742(int valor) {
    if (valor > LIMITE_20742) return LIMITE_20742;
    return valor * FACTOR_20742;
}
