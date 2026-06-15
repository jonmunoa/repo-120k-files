// fichero 34210 -- macros y constantes -- MODIFICADO
#define LIMITE_34210 34410
#define FACTOR_34210 2

int aplicar_limite34210(int valor) {
    if (valor > LIMITE_34210) return LIMITE_34210;
    return valor * FACTOR_34210;
}
