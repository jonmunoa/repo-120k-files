// fichero 23742 -- macros y constantes -- MODIFICADO
#define LIMITE_23742 23942
#define FACTOR_23742 4

int aplicar_limite23742(int valor) {
    if (valor > LIMITE_23742) return LIMITE_23742;
    return valor * FACTOR_23742;
}
