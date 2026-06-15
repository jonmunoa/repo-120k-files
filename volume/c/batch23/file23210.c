// fichero 23210 -- macros y constantes -- MODIFICADO
#define LIMITE_23210 23410
#define FACTOR_23210 2

int aplicar_limite23210(int valor) {
    if (valor > LIMITE_23210) return LIMITE_23210;
    return valor * FACTOR_23210;
}
