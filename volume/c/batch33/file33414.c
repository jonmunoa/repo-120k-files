// fichero 33414 -- macros y constantes -- MODIFICADO
#define LIMITE_33414 33614
#define FACTOR_33414 6

int aplicar_limite33414(int valor) {
    if (valor > LIMITE_33414) return LIMITE_33414;
    return valor * FACTOR_33414;
}
