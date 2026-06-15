// fichero 32210 -- macros y constantes -- MODIFICADO
#define LIMITE_32210 32410
#define FACTOR_32210 2

int aplicar_limite32210(int valor) {
    if (valor > LIMITE_32210) return LIMITE_32210;
    return valor * FACTOR_32210;
}
