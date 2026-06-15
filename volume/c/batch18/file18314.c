// fichero 18314 -- macros y constantes -- MODIFICADO
#define LIMITE_18314 18514
#define FACTOR_18314 6

int aplicar_limite18314(int valor) {
    if (valor > LIMITE_18314) return LIMITE_18314;
    return valor * FACTOR_18314;
}
