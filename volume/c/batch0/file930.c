// fichero 930 -- macros y constantes -- MODIFICADO
#define LIMITE_930 1130
#define FACTOR_930 2

int aplicar_limite930(int valor) {
    if (valor > LIMITE_930) return LIMITE_930;
    return valor * FACTOR_930;
}
