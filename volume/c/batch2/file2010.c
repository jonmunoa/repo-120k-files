// fichero 2010 -- macros y constantes -- MODIFICADO
#define LIMITE_2010 2210
#define FACTOR_2010 2

int aplicar_limite2010(int valor) {
    if (valor > LIMITE_2010) return LIMITE_2010;
    return valor * FACTOR_2010;
}
