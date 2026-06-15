// fichero 25070 -- macros y constantes -- MODIFICADO
#define LIMITE_25070 25270
#define FACTOR_25070 2

int aplicar_limite25070(int valor) {
    if (valor > LIMITE_25070) return LIMITE_25070;
    return valor * FACTOR_25070;
}
