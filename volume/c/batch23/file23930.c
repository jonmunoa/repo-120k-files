// fichero 23930 -- macros y constantes -- MODIFICADO
#define LIMITE_23930 24130
#define FACTOR_23930 2

int aplicar_limite23930(int valor) {
    if (valor > LIMITE_23930) return LIMITE_23930;
    return valor * FACTOR_23930;
}
