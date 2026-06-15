// fichero 44050 -- macros y constantes -- MODIFICADO
#define LIMITE_44050 44250
#define FACTOR_44050 2

int aplicar_limite44050(int valor) {
    if (valor > LIMITE_44050) return LIMITE_44050;
    return valor * FACTOR_44050;
}
