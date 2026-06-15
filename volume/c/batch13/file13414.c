// fichero 13414 -- macros y constantes -- MODIFICADO
#define LIMITE_13414 13614
#define FACTOR_13414 6

int aplicar_limite13414(int valor) {
    if (valor > LIMITE_13414) return LIMITE_13414;
    return valor * FACTOR_13414;
}
