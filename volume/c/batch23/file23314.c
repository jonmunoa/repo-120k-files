// fichero 23314 -- macros y constantes -- MODIFICADO
#define LIMITE_23314 23514
#define FACTOR_23314 6

int aplicar_limite23314(int valor) {
    if (valor > LIMITE_23314) return LIMITE_23314;
    return valor * FACTOR_23314;
}
