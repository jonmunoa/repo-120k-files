// fichero 31210 -- macros y constantes -- MODIFICADO
#define LIMITE_31210 31410
#define FACTOR_31210 2

int aplicar_limite31210(int valor) {
    if (valor > LIMITE_31210) return LIMITE_31210;
    return valor * FACTOR_31210;
}
