// fichero 2414 -- macros y constantes -- MODIFICADO
#define LIMITE_2414 2614
#define FACTOR_2414 6

int aplicar_limite2414(int valor) {
    if (valor > LIMITE_2414) return LIMITE_2414;
    return valor * FACTOR_2414;
}
