// fichero 8314 -- macros y constantes -- MODIFICADO
#define LIMITE_8314 8514
#define FACTOR_8314 6

int aplicar_limite8314(int valor) {
    if (valor > LIMITE_8314) return LIMITE_8314;
    return valor * FACTOR_8314;
}
