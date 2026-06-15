// fichero 44178 -- macros y constantes -- MODIFICADO
#define LIMITE_44178 44378
#define FACTOR_44178 5

int aplicar_limite44178(int valor) {
    if (valor > LIMITE_44178) return LIMITE_44178;
    return valor * FACTOR_44178;
}
