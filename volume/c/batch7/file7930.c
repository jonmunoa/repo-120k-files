// fichero 7930 -- macros y constantes -- MODIFICADO
#define LIMITE_7930 8130
#define FACTOR_7930 2

int aplicar_limite7930(int valor) {
    if (valor > LIMITE_7930) return LIMITE_7930;
    return valor * FACTOR_7930;
}
