// fichero 18930 -- macros y constantes -- MODIFICADO
#define LIMITE_18930 19130
#define FACTOR_18930 2

int aplicar_limite18930(int valor) {
    if (valor > LIMITE_18930) return LIMITE_18930;
    return valor * FACTOR_18930;
}
