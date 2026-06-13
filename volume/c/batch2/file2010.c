// fichero 2010 -- macros y constantes
#define LIMITE_2010 2110
#define FACTOR_2010 1

int aplicar_limite2010(int valor) {
    if (valor > LIMITE_2010) return LIMITE_2010;
    return valor * FACTOR_2010;
}
