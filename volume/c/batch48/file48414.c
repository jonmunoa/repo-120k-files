// fichero 48414 -- macros y constantes -- MODIFICADO
#define LIMITE_48414 48614
#define FACTOR_48414 6

int aplicar_limite48414(int valor) {
    if (valor > LIMITE_48414) return LIMITE_48414;
    return valor * FACTOR_48414;
}
