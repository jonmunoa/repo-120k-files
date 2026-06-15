// fichero 8414 -- macros y constantes -- MODIFICADO
#define LIMITE_8414 8614
#define FACTOR_8414 6

int aplicar_limite8414(int valor) {
    if (valor > LIMITE_8414) return LIMITE_8414;
    return valor * FACTOR_8414;
}
