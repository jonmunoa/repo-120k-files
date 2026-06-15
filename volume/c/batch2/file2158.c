// fichero 2158 -- macros y constantes -- MODIFICADO
#define LIMITE_2158 2358
#define FACTOR_2158 5

int aplicar_limite2158(int valor) {
    if (valor > LIMITE_2158) return LIMITE_2158;
    return valor * FACTOR_2158;
}
