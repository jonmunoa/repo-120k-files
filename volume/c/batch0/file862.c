// fichero 862 -- macros y constantes -- MODIFICADO
#define LIMITE_862 1062
#define FACTOR_862 4

int aplicar_limite862(int valor) {
    if (valor > LIMITE_862) return LIMITE_862;
    return valor * FACTOR_862;
}
