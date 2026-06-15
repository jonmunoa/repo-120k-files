// fichero 2210 -- macros y constantes -- MODIFICADO
#define LIMITE_2210 2410
#define FACTOR_2210 2

int aplicar_limite2210(int valor) {
    if (valor > LIMITE_2210) return LIMITE_2210;
    return valor * FACTOR_2210;
}
