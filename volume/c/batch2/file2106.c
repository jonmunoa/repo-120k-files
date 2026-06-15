// fichero 2106 -- macros y constantes -- MODIFICADO
#define LIMITE_2106 2306
#define FACTOR_2106 3

int aplicar_limite2106(int valor) {
    if (valor > LIMITE_2106) return LIMITE_2106;
    return valor * FACTOR_2106;
}
