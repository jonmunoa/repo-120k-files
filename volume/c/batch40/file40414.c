// fichero 40414 -- macros y constantes -- MODIFICADO
#define LIMITE_40414 40614
#define FACTOR_40414 6

int aplicar_limite40414(int valor) {
    if (valor > LIMITE_40414) return LIMITE_40414;
    return valor * FACTOR_40414;
}
