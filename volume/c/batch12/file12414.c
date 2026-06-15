// fichero 12414 -- macros y constantes -- MODIFICADO
#define LIMITE_12414 12614
#define FACTOR_12414 6

int aplicar_limite12414(int valor) {
    if (valor > LIMITE_12414) return LIMITE_12414;
    return valor * FACTOR_12414;
}
