// fichero 6414 -- macros y constantes -- MODIFICADO
#define LIMITE_6414 6614
#define FACTOR_6414 6

int aplicar_limite6414(int valor) {
    if (valor > LIMITE_6414) return LIMITE_6414;
    return valor * FACTOR_6414;
}
