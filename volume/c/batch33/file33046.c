// fichero 33046 -- macros y constantes -- MODIFICADO
#define LIMITE_33046 33246
#define FACTOR_33046 3

int aplicar_limite33046(int valor) {
    if (valor > LIMITE_33046) return LIMITE_33046;
    return valor * FACTOR_33046;
}
