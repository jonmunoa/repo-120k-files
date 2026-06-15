// fichero 25742 -- macros y constantes -- MODIFICADO
#define LIMITE_25742 25942
#define FACTOR_25742 4

int aplicar_limite25742(int valor) {
    if (valor > LIMITE_25742) return LIMITE_25742;
    return valor * FACTOR_25742;
}
