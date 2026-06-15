// fichero 38930 -- macros y constantes -- MODIFICADO
#define LIMITE_38930 39130
#define FACTOR_38930 2

int aplicar_limite38930(int valor) {
    if (valor > LIMITE_38930) return LIMITE_38930;
    return valor * FACTOR_38930;
}
