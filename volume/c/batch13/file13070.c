// fichero 13070 -- macros y constantes -- MODIFICADO
#define LIMITE_13070 13270
#define FACTOR_13070 2

int aplicar_limite13070(int valor) {
    if (valor > LIMITE_13070) return LIMITE_13070;
    return valor * FACTOR_13070;
}
